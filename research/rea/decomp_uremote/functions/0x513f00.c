// rea decompile_all
// name: FUN_00513f00
// address: 0x513f00
// body: available
// range: 0x513f00-0x514162 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005140f8) */
/* WARNING: Removing unreachable block (ram,0x00514120) */
/* WARNING: Removing unreachable block (ram,0x0051410d) */
/* WARNING: Removing unreachable block (ram,0x00514127) */

char FUN_00513f00(undefined4 param_1,undefined2 param_2,undefined2 *param_3,int param_4)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_3c;
  char local_19;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cf22c;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_19 = '\0';
  if ((*(int *)(param_4 + 0xc18) == 0) &&
     (pcVar2 = std::exception::what((exception *)(param_4 + 0xc28)), pcVar2 != (char *)0x0)) {
    iVar3 = FUN_005af82d(0x38);
    local_8 = 0;
    if (iVar3 == 0) {
      local_3c = 0;
    }
    else {
      local_3c = FUN_0054e640(2,1,6);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_4 + 0xc18) = local_3c;
    if (*(int *)(param_4 + 0xc18) != 0) {
      uVar4 = FUN_00514840();
      uVar4 = uVar4 & 0xffff;
      pcVar2 = std::exception::what((exception *)(param_4 + 0xc28));
      local_19 = (**(code **)(**(int **)(param_4 + 0xc18) + 0x10))(pcVar2,uVar4);
      if (local_19 == '\0') {
        if (*(undefined4 **)(param_4 + 0xc18) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_4 + 0xc18))(1);
        }
        *(undefined4 *)(param_4 + 0xc18) = 0;
        *(undefined4 *)(*(int *)(param_4 + 0xbe4) + 0x120) = 0;
        *(undefined4 *)(*(int *)(param_4 + 0xbe4) + 0xc64) = 0;
        (**(code **)(**(int **)(param_4 + 0xbe4) + 0x18))();
      }
      else {
        FUN_0052eb90();
        (**(code **)(param_4 + 0xc20))(1,*(undefined4 *)(param_4 + 0xc24));
        pcVar2 = std::exception::what((exception *)(param_4 + 0xc28));
        *(char **)(*(int *)(param_4 + 0xbe4) + 0x120) = pcVar2;
      }
    }
  }
  if (*(int *)(param_4 + 0xc18) != 0) {
    iVar3 = (**(code **)(**(int **)(param_4 + 0xc18) + 0x18))(param_1,param_2,uVar1);
    if (iVar3 == 0) {
      *param_3 = param_2;
    }
    else {
      *param_3 = 0;
    }
    local_19 = '\x01';
  }
  ExceptionList = local_10;
  return local_19;
}

