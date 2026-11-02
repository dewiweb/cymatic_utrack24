// rea decompile_all
// name: FUN_0040a197
// address: 0x40a197
// body: available
// range: 0x40a197-0x40a25a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0040a197(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  piVar3 = param_1;
  param_1[0xb] = param_2;
  FUN_0040f38d();
  iVar4 = FUN_00409ed1();
  if (iVar4 != 0) {
    iVar5 = *(int *)(*param_1 + 0x2b4);
    puVar1 = (undefined4 *)param_1[10];
    iVar2 = *(int *)(iVar5 + 0x570);
    (**(code **)(iVar4 + 4))(*puVar1,param_1[4],param_1[5],0,0);
    iVar7 = *(int *)(iVar5 + 0x768);
    if (iVar7 != 0) {
      param_1 = (int *)(iVar5 + 0x768 + iVar7 * 4);
      do {
        if (iVar2 == *(int *)(*param_1 + 0x44)) {
          iVar5 = piVar3[4];
          iVar6 = piVar3[5];
        }
        else {
          iVar5 = FUN_0040d230(iVar2);
          iVar6 = FUN_0040d230(iVar2);
        }
        (**(code **)(iVar4 + 4))(puVar1[iVar7],iVar5,iVar6,0,0);
        param_1 = param_1 + -1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return 0;
}

