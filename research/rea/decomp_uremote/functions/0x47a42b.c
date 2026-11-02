// rea decompile_all
// name: FUN_0047a42b
// address: 0x47a42b
// body: available
// range: 0x47a42b-0x47a5da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047a42b(undefined4 param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  bool bVar5;
  undefined4 *extraout_ECX;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float *local_10;
  float *local_c;
  
  FUN_00478755();
  pfVar3 = (float *)*extraout_ECX;
  iVar4 = extraout_ECX[2];
  bVar5 = true;
  if (pfVar3 < pfVar3 + iVar4) {
    local_c = pfVar3 + 2;
    local_10 = pfVar3 + 3;
    pfVar6 = pfVar3;
    pfVar8 = pfVar3 + 1;
    do {
      fVar11 = *pfVar6;
      pfVar1 = local_10 + 1;
      pfVar2 = local_c + 1;
      pfVar9 = pfVar8 + 1;
      pfVar7 = pfVar6 + 1;
      if (fVar11 == 100002.0) {
        FUN_004a8f0b();
        fVar11 = *pfVar9;
        fVar10 = *pfVar7;
        if (bVar5) {
          bVar5 = false;
          FUN_00478763(fVar10,fVar11);
        }
        else {
LAB_0047a4ed:
          FUN_00478781(fVar10,fVar11);
        }
        pfVar7 = pfVar6 + 3;
        pfVar9 = pfVar8 + 3;
        local_10 = local_10 + 3;
        local_c = local_c + 3;
      }
      else {
        if (fVar11 == 100001.0) {
          FUN_004a8f0b();
          fVar11 = *pfVar9;
          fVar10 = *pfVar7;
          goto LAB_0047a4ed;
        }
        if (fVar11 == 100003.0) {
          FUN_004a8f39(param_1);
          FUN_004787de(*pfVar7,*pfVar9,*pfVar2,*pfVar1);
          iVar12 = 0x10;
        }
        else {
          local_10 = pfVar1;
          local_c = pfVar2;
          if (fVar11 != 100004.0) goto LAB_0047a5cb;
          FUN_004a8f94(pfVar7,pfVar9,pfVar2);
          FUN_004787de(*pfVar7,*pfVar9,*pfVar2,*pfVar1);
          FUN_00478781(pfVar6[5],pfVar6[6]);
          iVar12 = 0x18;
        }
        pfVar7 = (float *)((int)pfVar7 + iVar12);
        pfVar9 = (float *)((int)pfVar9 + iVar12);
        local_10 = (float *)((int)pfVar1 + iVar12);
        local_c = (float *)((int)pfVar2 + iVar12);
      }
LAB_0047a5cb:
      pfVar6 = pfVar7;
      pfVar8 = pfVar9;
    } while (pfVar7 < pfVar3 + iVar4);
  }
  return;
}

