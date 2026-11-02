// rea decompile_all
// name: FUN_0049eca2
// address: 0x49eca2
// body: available
// range: 0x49eca2-0x49eda2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0049ed5e) */
/* WARNING: Removing unreachable block (ram,0x0049ed64) */

undefined4 FUN_0049eca2(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dd73d;
  local_14 = ExceptionList;
  uVar2 = DAT_00955fd4 ^ (uint)&stack0xffffffa0;
  ExceptionList = &local_14;
  iVar3 = FUN_0049e9d0(1);
  if (iVar3 == 0) {
    FUN_0049e080(uVar2);
    local_c = 1;
    FUN_00474d0f();
  }
  else {
    iVar3 = iVar3 + 4;
    cVar1 = FUN_00478a60();
    if (cVar1 == '\0') {
      iVar4 = FUN_005af82d(0x20);
      local_c = 0;
      if (iVar4 != 0) {
        FUN_00478ada(param_2);
        FUN_004a51ab(iVar3,param_2);
        uVar5 = FUN_00439b27();
        uVar5 = FUN_004776af(iVar4,uVar5,iVar3,param_2);
        ExceptionList = local_14;
        return uVar5;
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}

