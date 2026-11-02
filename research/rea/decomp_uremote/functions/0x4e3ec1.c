// rea decompile_all
// name: FUN_004e3ec1
// address: 0x4e3ec1
// body: available
// range: 0x4e3ec1-0x4e3f68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004e3ec1(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  int local_8;
  
  if (((param_1[2] == param_2[2]) && ((char)param_1[3] == (char)param_2[3])) &&
     (*(char *)((int)param_1 + 0xd) == *(char *)((int)param_2 + 0xd))) {
    local_8 = 0;
    if (0 < param_1[2]) {
      do {
        piVar1 = *(int **)(local_8 * 4 + *param_1);
        piVar2 = *(int **)(local_8 * 4 + *param_2);
        if (piVar1[1] != piVar2[1]) goto LAB_004e3f60;
        iVar4 = (**(code **)(*piVar1 + 0xc))(&local_10);
        iVar5 = (**(code **)(*piVar2 + 0xc))(local_14);
        iVar7 = local_10 + -1;
        if (-1 < iVar7) {
          local_c = iVar5 - iVar4;
          do {
            cVar3 = FUN_004e3aae();
            if (cVar3 != '\0') goto LAB_004e3f60;
            iVar7 = iVar7 + -1;
          } while (-1 < iVar7);
        }
        local_8 = local_8 + 1;
      } while (local_8 < param_1[2]);
    }
    uVar6 = 1;
  }
  else {
LAB_004e3f60:
    uVar6 = 0;
  }
  return uVar6;
}

