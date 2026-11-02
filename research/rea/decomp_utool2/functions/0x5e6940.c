// rea decompile_all
// name: FUN_005e6940
// address: 0x5e6940
// body: available
// range: 0x5e6940-0x5e6be1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e6940(void)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auVar5 [16];
  int iVar6;
  int *in_ECX;
  int in_EDX;
  float *pfVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined8 uStack_38;
  int local_20;
  float local_18;
  
  iVar6 = *(int *)(in_EDX + 0x1c);
  iVar2 = *(int *)(in_EDX + 4);
  in_ECX[1] = 0x80;
  in_ECX[2] = 0x40;
  in_ECX[3] = *(int *)(iVar6 + 0xb74);
  *in_ECX = iVar2;
  in_ECX[0x29] = 0x80;
  in_ECX[0x2c] = *(int *)(iVar6 + 4) / 2;
  iVar6 = FUN_004c5556(0x80,4);
  in_ECX[9] = iVar6;
  FUN_005dfe60();
  piVar3 = (int *)in_ECX[9];
  iVar6 = 0;
  if ((in_ECX + 9 < piVar3) || (piVar3 + 0x7f < in_ECX + 9)) {
    uStack_38 = 0x405fc00000000000;
    auVar5._12_4_ = 0x405fc000;
    auVar5._0_12_ = ZEXT812(0x405fc00000000000);
    do {
      auVar9._0_8_ = (double)iVar6;
      auVar9._8_8_ = (double)(iVar6 + 1);
      auVar10._8_4_ = (int)uStack_38;
      auVar10._0_8_ = 0x405fc00000000000;
      auVar10._12_4_ = (int)((ulonglong)uStack_38 >> 0x20);
      auVar10 = divpd(auVar9,auVar10);
      dVar8 = auVar10._0_8_ * 3.141592653589793;
      dVar11 = auVar10._8_8_ * 3.141592653589793;
      thunk_FUN_006f5e50();
      uStack_38 = auVar5._8_8_;
      *(ulonglong *)(piVar3 + iVar6) =
           CONCAT44((float)dVar11 * (float)dVar11,(float)dVar8 * (float)dVar8);
      iVar6 = iVar6 + 2;
    } while (iVar6 < 0x80);
  }
  else {
    do {
      dVar8 = ((double)iVar6 / 127.0) * 3.141592653589793;
      FUN_006f9250();
      *(float *)(in_ECX[9] + iVar6 * 4) = (float)dVar8;
      iVar4 = in_ECX[9];
      fVar1 = *(float *)(iVar4 + iVar6 * 4);
      *(float *)(iVar4 + iVar6 * 4) = fVar1 * fVar1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x80);
  }
  local_20 = 7;
  in_ECX[10] = 2;
  pfVar7 = (float *)(in_ECX + 0xd);
  in_ECX[0xb] = 4;
  in_ECX[0xe] = 4;
  in_ECX[0xf] = 5;
  in_ECX[0x12] = 6;
  in_ECX[0x13] = 6;
  in_ECX[0x16] = 9;
  in_ECX[0x17] = 8;
  in_ECX[0x1a] = 0xd;
  in_ECX[0x1b] = 8;
  in_ECX[0x1e] = 0x11;
  in_ECX[0x1f] = 8;
  in_ECX[0x22] = 0x16;
  in_ECX[0x23] = 8;
  do {
    fVar1 = pfVar7[-2];
    local_18 = (float)FUN_004c554b((int)fVar1 << 2);
    pfVar7[-1] = local_18;
    iVar6 = 0;
    if (0 < (int)fVar1) {
      do {
        dVar8 = (((double)iVar6 + 0.5) / (double)(int)fVar1) * 3.141592653589793;
        FUN_006f9250();
        *(float *)((int)local_18 + iVar6 * 4) = (float)dVar8;
        local_18 = pfVar7[-1];
        iVar4 = iVar6 * 4;
        iVar6 = iVar6 + 1;
        *pfVar7 = *(float *)((int)local_18 + iVar4) + *pfVar7;
      } while (iVar6 < (int)fVar1);
    }
    *pfVar7 = 1.0 / *pfVar7;
    pfVar7 = pfVar7 + 4;
    local_20 = local_20 + -1;
  } while (local_20 != 0);
  iVar6 = FUN_004c5556(iVar2 * 7,0x90);
  in_ECX[0x26] = iVar6;
  iVar6 = FUN_004c5556(in_ECX[0x29],4);
  in_ECX[0x28] = iVar6;
  return;
}

