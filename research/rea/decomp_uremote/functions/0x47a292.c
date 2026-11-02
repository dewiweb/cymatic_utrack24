// rea decompile_all
// name: FUN_0047a292
// address: 0x47a292
// body: available
// range: 0x47a292-0x47a42a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047a292(undefined4 param_1,int *param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  iVar8 = *param_2;
  uVar9 = 0;
  if (param_2[2] != 0) {
    do {
      fVar1 = *(float *)(iVar8 + uVar9 * 4);
      uVar10 = uVar9 + 1;
      if (fVar1 == 100005.0) {
        FUN_00478e1f();
      }
      else {
        uVar2 = *(undefined4 *)(iVar8 + uVar10 * 4);
        uVar3 = *(undefined4 *)(iVar8 + (uVar9 + 2) * 4);
        uVar10 = uVar9 + 3;
        FUN_004a8f0b();
        if (fVar1 == 100002.0) {
          FUN_00478b0d(uVar2,uVar3);
        }
        else if (fVar1 == 100001.0) {
          FUN_00478ba1(uVar2,uVar3);
        }
        else if (fVar1 == 100003.0) {
          uVar4 = *(undefined4 *)(iVar8 + uVar10 * 4);
          uVar5 = *(undefined4 *)(iVar8 + (uVar9 + 4) * 4);
          uVar10 = uVar9 + 5;
          FUN_004a8f0b();
          FUN_00478c33(uVar2,uVar3,uVar4,uVar5);
        }
        else if (fVar1 == 100004.0) {
          uVar4 = *(undefined4 *)(iVar8 + uVar10 * 4);
          uVar5 = *(undefined4 *)(iVar8 + (uVar9 + 4) * 4);
          uVar6 = *(undefined4 *)(iVar8 + (uVar9 + 5) * 4);
          uVar7 = *(undefined4 *)(iVar8 + (uVar9 + 6) * 4);
          uVar10 = uVar9 + 7;
          FUN_004a8f39(param_3);
          FUN_00478d07(uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
        }
      }
      uVar9 = uVar10;
    } while (uVar10 < (uint)param_2[2]);
  }
  return;
}

