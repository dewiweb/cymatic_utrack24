// rea decompile_all
// name: FUN_00408c5f
// address: 0x408c5f
// body: available
// range: 0x408c5f-0x408d96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00408c5f(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint *puVar7;
  int local_8;
  
  iVar2 = *param_1;
  iVar3 = param_1[2];
  local_8 = 0;
  if ((iVar3 != 0) && (param_1[6] == 0)) {
    uVar6 = (uint)*(byte *)(param_1 + 3);
    iVar4 = FUN_00411976(4,0,&local_8);
    param_1[6] = iVar4;
    if ((local_8 == 0) &&
       ((local_8 = FUN_0041106d(), local_8 == 0 && (local_8 = FUN_004111b5(), local_8 == 0)))) {
      puVar7 = (uint *)param_1[6];
      pbVar5 = *(byte **)(iVar2 + 0x20);
      pbVar1 = pbVar5 + uVar6 * (iVar3 + 1);
      if (uVar6 == 1) {
        for (; pbVar5 < pbVar1; pbVar5 = pbVar5 + 1) {
          *puVar7 = (uint)*pbVar5;
          puVar7 = puVar7 + 1;
        }
      }
      else if (uVar6 == 2) {
        for (; pbVar5 < pbVar1; pbVar5 = pbVar5 + 2) {
          *puVar7 = (uint)CONCAT11(*pbVar5,pbVar5[1]);
          puVar7 = puVar7 + 1;
        }
      }
      else if (uVar6 == 3) {
        for (; pbVar5 < pbVar1; pbVar5 = pbVar5 + 3) {
          *puVar7 = (int)CONCAT21(CONCAT11(*pbVar5,pbVar5[1]),pbVar5[2]);
          puVar7 = puVar7 + 1;
        }
      }
      else {
        for (; pbVar5 < pbVar1; pbVar5 = pbVar5 + 4) {
          *puVar7 = CONCAT31(CONCAT21(CONCAT11(*pbVar5,pbVar5[1]),pbVar5[2]),pbVar5[3]);
          puVar7 = puVar7 + 1;
        }
      }
      FUN_00411249();
    }
    else {
      FUN_00411a5c(param_1[6]);
      param_1[6] = 0;
    }
  }
  return local_8;
}

