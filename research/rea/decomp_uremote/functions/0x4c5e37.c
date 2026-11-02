// rea decompile_all
// name: FUN_004c5e37
// address: 0x4c5e37
// body: available
// range: 0x4c5e37-0x4c5f6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c5e37(int param_1)

{
  char cVar1;
  int *piVar2;
  int *in_ECX;
  undefined4 extraout_ECX;
  undefined4 uStack_6c;
  int *piStack_68;
  uint uStack_64;
  undefined1 auStack_54 [3];
  byte local_51;
  int *local_50;
  int local_4c;
  undefined1 *puStack_48;
  undefined1 auStack_44 [4];
  undefined1 local_40 [36];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e463e;
  local_14 = ExceptionList;
  local_1c = DAT_00955fd4 ^ (uint)auStack_54;
  uStack_64 = DAT_00955fd4 ^ (uint)&stack0xffffffa0;
  ExceptionList = &local_14;
  local_4c = param_1;
  if (*(int **)(param_1 + 0x18) != in_ECX) {
    piStack_68 = (int *)0x0;
    uStack_6c = 0x4c5e94;
    local_50 = in_ECX;
    cVar1 = FUN_004f5fe9();
    if (cVar1 != '\0') {
      uStack_6c = 0x4c5eab;
      FUN_004c2293();
    }
    piStack_68 = (int *)0x4c5eba;
    FUN_004c661d();
    local_c = 0;
    local_51 = *(byte *)(in_ECX + 0x1a) >> 1 & 1;
    piStack_68 = (int *)0x0;
    uStack_6c = 0x4c5ed1;
    (**(code **)(*in_ECX + 0x28))();
    puStack_48 = (undefined1 *)&uStack_6c;
    uStack_6c = extraout_ECX;
    FUN_004c6d5f(&uStack_6c);
    piVar2 = (int *)FUN_004c62d4(auStack_44);
    if (local_51 != 0) {
      piStack_68 = (int *)(uint)(piVar2 == (int *)0x0);
      uStack_6c = 0x4c5f10;
      FUN_004c64b8();
    }
    if (local_50[3] != 0) {
      piStack_68 = local_50;
      uStack_6c = 0x4c5f1d;
      FUN_004c107a();
    }
    if (piVar2 != (int *)0x0) {
      piStack_68 = (int *)0x4c5f2e;
      FUN_004a4d78();
      piStack_68 = (int *)local_40;
      uStack_6c = 0x4c5f3a;
      (**(code **)(*piVar2 + 0x14))();
    }
    piStack_68 = (int *)0x4c5f43;
    FUN_00474d0f();
    piStack_68 = (int *)0x4c5f4c;
    FUN_004615f7();
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_54);
  return;
}

