// rea decompile_all
// name: FUN_00428a84
// address: 0x428a84
// body: available
// range: 0x428a84-0x428bd4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00428a84(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0040ffb6(&DAT_0090ed4c);
  if (iVar2 == 0) {
    iVar3 = 0xb;
  }
  else {
    iVar3 = FUN_0041106d();
    if ((iVar3 == 0) &&
       (iVar3 = (**(code **)(iVar2 + 4))(param_1,param_2,param_3,param_4,param_5), iVar3 == 0)) {
      iVar3 = *(int *)(param_2 + 0x94);
      if ((iVar3 == 0x10000) || ((iVar3 == 0x20000 || (iVar3 == 0x74727565)))) {
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x800;
        if (param_3 < 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (**(code **)(iVar2 + 8))(param_1,param_2,param_3,param_4,param_5);
          if (iVar3 == 0) {
            cVar1 = FUN_004289c0();
            if (cVar1 != '\0') {
              *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x2000;
            }
            iVar3 = FUN_00426874(param_2,param_1);
            if (iVar3 == 0) {
              if ((*(byte *)(param_2 + 8) & 1) != 0) {
                if ((((*(int *)(*(int *)(param_2 + 0x80) + 0x34) != 0) ||
                     (iVar3 = FUN_004264e1(param_1), iVar3 == 0)) &&
                    (iVar3 = FUN_00426707(param_2), iVar3 == 0)) &&
                   (iVar3 = FUN_004267d6(param_1), iVar3 == 0)) {
                  iVar3 = FUN_00426825(param_1);
                }
                if (((*(int *)(*(int *)(param_2 + 0x80) + 0x34) == 0) &&
                    (*(int *)(param_2 + 0x1c) != 0)) &&
                   ((*(int *)(param_2 + 0x2e0) != 0 && (cVar1 = FUN_004289e9(), cVar1 != '\0')))) {
                  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffffe;
                }
              }
              FUN_0042725a();
            }
          }
        }
      }
      else {
        iVar3 = 2;
      }
    }
  }
  return iVar3;
}

