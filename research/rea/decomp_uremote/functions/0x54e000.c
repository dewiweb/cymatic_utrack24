// rea decompile_all
// name: FUN_0054e000
// address: 0x54e000
// body: available
// range: 0x54e000-0x54e1c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0054e189) */

void FUN_0054e000(undefined4 param_1,undefined2 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  int local_40;
  uint local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d2ee7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = FUN_005af82d(0x18,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (iVar4 == 0) {
    local_40 = 0;
  }
  else {
    local_40 = FUN_0052efc0();
  }
  local_8 = 0xffffffff;
  if ((local_40 != 0) && (cVar3 = FUN_0052f140(param_1,param_2), cVar3 != '\0')) {
    local_20 = 0xffffffff;
    uVar1 = *(uint *)(in_ECX + 0xc7c);
    if (*(int **)(in_ECX + 0x10c) != (int *)0x0) {
      local_20 = (**(code **)(**(int **)(in_ECX + 0x10c) + 0x10))();
    }
    if ((local_20 < 0x5000) || (0x200 < uVar1)) {
      *(int *)(in_ECX + 0xcf0) = *(int *)(in_ECX + 0xcf0) + 1;
      FUN_00597200(0);
      *(undefined1 *)(in_ECX + 0xce4) = 1;
    }
    FUN_00513420();
    FUN_00517bb0(local_40);
    if (*(uint *)(in_ECX + 0xce8) < *(uint *)(in_ECX + 0xc7c)) {
      *(undefined4 *)(in_ECX + 0xce8) = *(undefined4 *)(in_ECX + 0xc7c);
    }
    *(int *)(in_ECX + -0x14) = *(int *)(in_ECX + -0x14) + 1;
    LOCK();
    *(int *)(in_ECX + 0xc84) = *(int *)(in_ECX + 0xc84) + -1;
    UNLOCK();
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xc88));
    puVar2 = *(undefined4 **)(in_ECX + 0xcdc);
    FUN_00515830();
    SetEvent((HANDLE)*puVar2);
  }
  ExceptionList = local_10;
  return;
}

