// rea decompile_all
// name: FUN_00475d12
// address: 0x475d12
// body: available
// range: 0x475d12-0x475f20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00475d12(float param_1,float param_2,float param_3,undefined1 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 *unaff_ESI;
  float10 fVar8;
  
  fVar8 = (float10)FUN_004a8e90(0,0x437f0000,param_3 * 255.0);
  fVar1 = (float)fVar8;
  uVar5 = FUN_004a8e4a(fVar1);
  if (0.0 < param_2) {
    fVar8 = (float10)FUN_0043d2e1(0x3f800000,param_2);
    fVar2 = (float)fVar8;
    fVar8 = (float10)FUN_00474de5(param_1);
    fVar3 = (float)(((float10)param_1 - fVar8) * (float10)6.0 + (float10)9.999999747378752e-06);
    fVar8 = (float10)FUN_00474de5(fVar3);
    fVar4 = (float)((float10)fVar3 - fVar8);
    uVar6 = FUN_004a8e4a((1.0 - fVar2) * fVar1);
    if (1.0 <= fVar3) {
      if (2.0 <= fVar3) {
        if (3.0 <= fVar3) {
          if (4.0 <= fVar3) {
            if (5.0 <= fVar3) {
              uVar7 = FUN_004a8e4a((1.0 - fVar4 * fVar2) * fVar1);
              *unaff_ESI = uVar7;
              goto LAB_00475f0f;
            }
            *unaff_ESI = uVar5;
            unaff_ESI[1] = uVar6;
            fVar4 = 1.0 - fVar4;
            goto LAB_00475e42;
          }
          *unaff_ESI = uVar5;
          uVar5 = FUN_004a8e4a((1.0 - fVar4 * fVar2) * fVar1);
          unaff_ESI[1] = uVar5;
        }
        else {
          uVar7 = FUN_004a8e4a((1.0 - fVar2 * (1.0 - fVar4)) * fVar1);
          *unaff_ESI = uVar7;
          unaff_ESI[1] = uVar5;
        }
      }
      else {
        *unaff_ESI = uVar6;
        unaff_ESI[1] = uVar5;
LAB_00475e42:
        uVar6 = FUN_004a8e4a((1.0 - fVar4 * fVar2) * fVar1);
      }
      unaff_ESI[2] = uVar6;
      goto LAB_00475f16;
    }
    *unaff_ESI = uVar6;
    uVar6 = FUN_004a8e4a((1.0 - fVar2 * (1.0 - fVar4)) * fVar1);
LAB_00475f0f:
    unaff_ESI[1] = uVar6;
  }
  else {
    *unaff_ESI = uVar5;
    unaff_ESI[1] = uVar5;
  }
  unaff_ESI[2] = uVar5;
LAB_00475f16:
  unaff_ESI[3] = param_4;
  return;
}

