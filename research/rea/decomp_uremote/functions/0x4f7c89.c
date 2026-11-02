// rea decompile_all
// name: FUN_004f7c89
// address: 0x4f7c89
// body: available
// range: 0x4f7c89-0x4f7f6d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f7c89(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *in_EAX;
  float *pfVar9;
  int iVar10;
  int iVar11;
  
  if (0 < param_1[2]) {
    iVar11 = param_1[2] + -1;
    fVar1 = *in_EAX;
    fVar2 = in_EAX[1];
    fVar5 = fVar1 + in_EAX[2];
    fVar7 = fVar2 + in_EAX[3];
    if (-1 < iVar11) {
      iVar10 = iVar11 * 0x10;
      do {
        pfVar9 = (float *)(*param_1 + iVar10);
        fVar3 = *pfVar9;
        fVar4 = pfVar9[1];
        fVar6 = fVar3 + pfVar9[2];
        fVar8 = fVar4 + pfVar9[3];
        if ((((fVar5 < fVar3 == (fVar5 == fVar3)) && (fVar6 < fVar1 == (fVar6 == fVar1))) &&
            (fVar7 < fVar4 == (fVar7 == fVar4))) && (fVar8 < fVar2 == (fVar8 == fVar2))) {
          if ((fVar1 <= fVar3) || (fVar6 <= fVar1)) {
            if ((fVar5 <= fVar3) || (fVar6 <= fVar5)) {
              if ((fVar2 <= fVar4) || (fVar8 <= fVar2)) {
                if ((fVar7 <= fVar4) || (fVar8 <= fVar7)) {
                  FUN_004f7f6e();
                }
                else {
                  pfVar9[1] = fVar7;
                  pfVar9[3] = fVar8 - fVar7;
                  if (((fVar3 < fVar1) || (fVar5 < fVar6)) || (fVar4 < fVar2)) goto LAB_004f7f21;
                }
              }
              else {
                if ((((NAN(fVar1) || NAN(fVar3)) || fVar1 < fVar3 == (fVar1 == fVar3)) ||
                    (fVar5 < fVar6)) || (fVar7 < fVar8)) {
                  pfVar9[1] = fVar2;
                  pfVar9[3] = fVar8 - fVar2;
                  goto LAB_004f7f21;
                }
                pfVar9[3] = fVar2 - fVar4;
              }
            }
            else {
              *pfVar9 = fVar5;
              pfVar9[2] = fVar6 - fVar5;
              if ((fVar4 < fVar2) || ((fVar7 < fVar8 || (fVar3 < fVar1)))) goto LAB_004f7f21;
            }
          }
          else if ((fVar2 < fVar4 == (fVar2 == fVar4)) || ((fVar7 < fVar8 || (fVar5 < fVar6)))) {
            *pfVar9 = fVar1;
            pfVar9[2] = fVar6 - fVar1;
LAB_004f7f21:
            FUN_004f80a0(iVar11 + 1);
            iVar11 = iVar11 + 2;
            iVar10 = iVar10 + 0x20;
          }
          else {
            pfVar9[2] = fVar1 - fVar3;
          }
        }
        iVar11 = iVar11 + -1;
        iVar10 = iVar10 + -0x10;
      } while (-1 < iVar11);
    }
  }
  return;
}

