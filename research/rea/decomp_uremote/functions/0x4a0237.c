// rea decompile_all
// name: FUN_004a0237
// address: 0x4a0237
// body: available
// range: 0x4a0237-0x4a03f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a0237(int *param_1,undefined4 param_2,float param_3,float param_4,float param_5,
                 uint param_6)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int extraout_EDX;
  int iVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  float local_14;
  float local_10;
  int local_c;
  
  fVar5 = param_4;
  iVar11 = param_1[2];
  FUN_0049fec9(param_2,param_3,param_4);
  iVar6 = param_1[2];
  do {
    if (iVar6 <= iVar11) {
      return;
    }
    iVar7 = *param_1;
    iVar1 = iVar11 * 0x1c + iVar7;
    iVar10 = iVar11;
    if ((*(int *)(iVar1 + 4) != 10) && (*(int *)(iVar1 + 4) != 0xd)) {
      iVar10 = iVar11 + 1;
    }
    local_c = -1;
    fVar2 = param_5 + *(float *)(iVar1 + 0xc);
    if (iVar10 < iVar6) {
      pcVar8 = (char *)(iVar10 * 0x1c + 0x18 + iVar7);
      iVar9 = iVar10;
      do {
        iVar3 = *(int *)(pcVar8 + -0x14);
        if ((iVar3 == 0xd) || (iVar3 == 10)) {
          iVar10 = iVar9 + 1;
          if ((iVar3 == 0xd) && ((iVar10 < iVar6 && (*(int *)(iVar10 * 0x1c + 4 + iVar7) == 10)))) {
            iVar10 = iVar9 + 2;
          }
          break;
        }
        if (*pcVar8 == '\0') {
          fVar4 = (*(float *)(pcVar8 + -0xc) + *(float *)(pcVar8 + -4)) - 0.0001;
          if (fVar2 < fVar4 != (fVar2 == fVar4)) {
            iVar10 = iVar9;
            if (-1 < local_c) {
              iVar10 = local_c;
            }
            break;
          }
        }
        else {
          local_c = iVar9 + 1;
        }
        iVar10 = iVar9 + 1;
        pcVar8 = pcVar8 + 0x1c;
        iVar9 = iVar10;
      } while (iVar10 < iVar6);
    }
    fVar2 = *(float *)(iVar1 + 0xc);
    iVar6 = iVar10 + -1;
    local_10 = fVar2;
    if (iVar11 <= iVar6) {
      pcVar8 = (char *)(iVar6 * 0x1c + 0x18 + iVar7);
      do {
        if (*pcVar8 == '\0') {
          iVar7 = iVar6 * 0x1c + iVar7;
          local_10 = *(float *)(iVar7 + 0x14) + *(float *)(iVar7 + 0xc);
          break;
        }
        iVar6 = iVar6 + -1;
        pcVar8 = pcVar8 + -0x1c;
      } while (iVar11 <= iVar6);
    }
    local_14 = 0.0;
    if ((param_6 >> 6 & 1) == 0) {
      if ((param_6 >> 2 & 1) == 0) {
        if ((param_6 >> 1 & 1) != 0) {
          local_14 = param_5 - (local_10 - fVar2);
        }
      }
      else {
        local_14 = (param_5 - (local_10 - fVar2)) * 0.5;
      }
    }
    else {
      FUN_004a0aef(param_1,param_5);
    }
    FUN_004a05fb((local_14 + param_3) - fVar2,param_4 - fVar5);
    fVar12 = (float10)FUN_0049fa3d();
    iVar6 = *(int *)(extraout_EDX + 8);
    param_4 = (float)(fVar12 + (float10)param_4);
    iVar11 = iVar10;
  } while( true );
}

