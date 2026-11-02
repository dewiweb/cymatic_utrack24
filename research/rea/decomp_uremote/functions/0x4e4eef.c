// rea decompile_all
// name: FUN_004e4eef
// address: 0x4e4eef
// body: available
// range: 0x4e4eef-0x4e50a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e4eef(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined4 uStack_80;
  undefined1 *puStack_7c;
  undefined4 uStack_78;
  undefined1 **ppuStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005dfcf3;
  local_14 = ExceptionList;
  uStack_4c = DAT_00955fd4 ^ (uint)&stack0xffffffb8;
  ExceptionList = &local_14;
  uStack_50 = 0x4e4f29;
  iVar3 = thunk_FUN_004c1d58();
  uStack_68 = *(undefined4 *)(in_ECX + 0x1c);
  iVar1 = *(int *)(in_ECX + 0xbc);
  puStack_58 = (undefined1 *)
               ((*(int *)(in_ECX + 0x18) - *(int *)(iVar1 + 0x18)) - *(int *)(iVar1 + 0x10));
  uStack_60 = *(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0x10);
  uStack_64 = (uint)*(byte *)(in_ECX + 0xa8);
  puStack_5c = (undefined1 *)0x0;
  uStack_6c = *(undefined4 *)(in_ECX + 0x18);
  uStack_70 = param_1;
  ppuStack_74 = (undefined1 **)0x4e4f5f;
  puStack_54 = (undefined4 *)uStack_68;
  (**(code **)(*(int *)(iVar3 + 0x24) + 4))();
  puStack_54 = (undefined4 *)(in_ECX + 0xc0);
  if (*(char *)*puStack_54 != '\0') {
    uStack_78 = *(undefined4 *)(in_ECX + 0xbc);
    ppuStack_74 = &puStack_58;
    puStack_7c = (undefined1 *)0x4e4f84;
    puVar4 = (undefined4 *)FUN_004e5b73();
    puStack_5c = (undefined1 *)0x1;
    if (*(char *)*puVar4 == '\0') {
      ppuStack_74 = (undefined1 **)0x4e4f9a;
      cVar2 = FUN_004e61ec();
      uStack_60 = CONCAT13(1,(undefined3)uStack_60);
      if (cVar2 == '\0') goto LAB_004e4fa7;
    }
  }
  uStack_60 = uStack_60 & 0xffffff;
LAB_004e4fa7:
  if (((uint)puStack_5c & 1) != 0) {
    ppuStack_74 = (undefined1 **)0x4e4fb6;
    FUN_004652d6();
  }
  if (uStack_60._3_1_ != '\0') {
    puStack_58 = (undefined1 *)&ppuStack_74;
    puStack_7c = (undefined1 *)&ppuStack_74;
    uStack_78 = 0x3f000000;
    uStack_80 = 0;
    FUN_004c1e29(&puStack_58,0x1000a00);
    uStack_80 = 0x4e4feb;
    FUN_00476237();
    uStack_78 = 0x4e4ff2;
    FUN_0047cda7();
    ppuStack_74 = (undefined1 **)0x4e5001;
    ppuStack_74 = (undefined1 **)FUN_004e5c5c();
    uStack_78 = 0x4e500c;
    FUN_0047ceaa();
    uStack_78 = 0x4e5015;
    FUN_004c4d7a();
    uStack_78 = 0x4e5024;
    FUN_004e5c5c();
    iVar1 = *(int *)(in_ECX + 0xbc);
    puStack_5c = *(undefined1 **)(iVar1 + 0x1c);
    uStack_78 = 0;
    puStack_7c = (undefined1 *)0x4e5044;
    FUN_0049fa3d();
    puStack_7c = (undefined1 *)0x4e504b;
    FUN_005b3fb0();
    puStack_7c = (undefined1 *)0x1;
    uStack_80 = 0x4e5051;
    puStack_7c = (undefined1 *)FUN_00439b5a();
    puStack_5c = (undefined1 *)&uStack_80;
    uStack_80 = *(undefined4 *)(iVar1 + 0x9c);
    FUN_004f5b45();
    FUN_0047d077();
    uStack_78 = 0x4e5090;
    FUN_004c4d7a();
  }
  ExceptionList = (void *)0x0;
  return;
}

