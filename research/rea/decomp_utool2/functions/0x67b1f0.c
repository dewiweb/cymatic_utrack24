// rea decompile_all
// name: FUN_0067b1f0
// address: 0x67b1f0
// body: available
// range: 0x67b1f0-0x67b445 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067b1f0(int *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  iVar5 = *param_1;
  uVar8 = 0;
  if (param_1[2] != 0) {
    do {
      fVar1 = *(float *)(iVar5 + uVar8 * 4);
      uVar9 = uVar8 + 1;
      if (fVar1 == 100005.0) {
        iVar6 = in_ECX[2];
        if ((iVar6 != 0) && (*(float *)(*in_ECX + -4 + iVar6 * 4) != 100005.0)) {
          iVar7 = iVar6 + 1;
          if (in_ECX[1] < iVar7) {
            if (iVar7 < 0) {
              iVar7 = iVar6 + 2;
            }
            FUN_00409cf0((iVar7 >> 1) + iVar6 + 9 & 0xfffffff8);
          }
          iVar6 = in_ECX[2];
          in_ECX[2] = iVar6 + 1;
          *(undefined4 *)(*in_ECX + iVar6 * 4) = 0x47c35280;
        }
      }
      else {
        uVar9 = uVar8 + 3;
        fVar2 = param_2[4];
        fVar3 = param_2[3];
        if (fVar1 == 100002.0) {
          FUN_00682e50();
        }
        else if (fVar1 == 100001.0) {
          FUN_00682d90();
        }
        else if (fVar1 == 100003.0) {
          iVar6 = uVar9 * 4;
          iVar7 = uVar9 * 4;
          uVar9 = uVar8 + 5;
          FUN_0067c1c0(fVar2 * *(float *)(iVar5 + 4 + iVar7) + fVar3 * *(float *)(iVar5 + iVar6) +
                       param_2[5]);
        }
        else if (fVar1 == 100004.0) {
          fVar1 = *(float *)(iVar5 + 8 + uVar9 * 4);
          fVar4 = *(float *)(iVar5 + 0xc + uVar9 * 4);
          iVar6 = uVar9 * 4;
          iVar7 = uVar9 * 4;
          uVar9 = uVar8 + 7;
          FUN_0067c020(fVar2 * *(float *)(iVar5 + 4 + iVar7) + fVar3 * *(float *)(iVar5 + iVar6) +
                       param_2[5],*param_2 * fVar1 + param_2[1] * fVar4 + param_2[2],
                       fVar2 * fVar4 + fVar3 * fVar1 + param_2[5]);
        }
      }
      uVar8 = uVar9;
    } while (uVar9 < (uint)param_1[2]);
  }
  return;
}

