// rea decompile_all
// name: FUN_005c6710
// address: 0x5c6710
// body: available
// range: 0x5c6710-0x5c68c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c6710(uint param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 (*in_ECX) [16];
  double *in_EDX;
  int iVar7;
  double *pdVar8;
  double *pdVar9;
  double dVar10;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM3_Db;
  int local_14;
  
  dVar10 = (double)CONCAT44(in_XMM3_Db,in_XMM3_Da);
  iVar7 = (int)param_1 / 2;
  if (((uint)in_ECX & 0xf) == 0) {
    if (((uint)in_EDX & 0xf) == 0) {
      if (0 < iVar7) {
        do {
          dVar6 = *in_EDX;
          pdVar9 = in_EDX + 1;
          in_EDX = in_EDX + 2;
          dVar5 = *pdVar9 * dVar10 + *(double *)(*in_ECX + 8);
          auVar1._8_4_ = SUB84(dVar5,0);
          auVar1._0_8_ = dVar6 * dVar10 + *(double *)*in_ECX;
          auVar1._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
          *in_ECX = auVar1;
          in_ECX = in_ECX + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else if (0 < iVar7) {
      do {
        dVar6 = *in_EDX;
        pdVar9 = in_EDX + 1;
        in_EDX = in_EDX + 2;
        dVar5 = *pdVar9 * dVar10 + *(double *)(*in_ECX + 8);
        auVar2._8_4_ = SUB84(dVar5,0);
        auVar2._0_8_ = dVar6 * dVar10 + *(double *)*in_ECX;
        auVar2._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        *in_ECX = auVar2;
        in_ECX = in_ECX + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  else if (((uint)in_EDX & 0xf) == 0) {
    if (0 < iVar7) {
      do {
        dVar6 = *in_EDX;
        pdVar9 = in_EDX + 1;
        in_EDX = in_EDX + 2;
        dVar5 = *pdVar9 * dVar10 + *(double *)(*in_ECX + 8);
        auVar3._8_4_ = SUB84(dVar5,0);
        auVar3._0_8_ = dVar6 * dVar10 + *(double *)*in_ECX;
        auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        *in_ECX = auVar3;
        in_ECX = in_ECX + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  else if (0 < iVar7) {
    do {
      dVar6 = *in_EDX;
      pdVar9 = in_EDX + 1;
      in_EDX = in_EDX + 2;
      dVar5 = *pdVar9 * dVar10 + *(double *)(*in_ECX + 8);
      auVar4._8_4_ = SUB84(dVar5,0);
      auVar4._0_8_ = dVar6 * dVar10 + *(double *)*in_ECX;
      auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      *in_ECX = auVar4;
      in_ECX = in_ECX + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  param_1 = param_1 & 1;
  if ((param_1 != 0) && (iVar7 = 0, param_1 != 0)) {
    if (3 < param_1) {
      pdVar9 = in_EDX + 3;
      pdVar8 = (double *)(*in_ECX + 8);
      local_14 = (param_1 - 4 >> 2) + 1;
      iVar7 = local_14 * 4;
      do {
        pdVar8[-1] = pdVar9[-3] * (double)CONCAT44(in_XMM3_Db,in_XMM3_Da) + pdVar8[-1];
        *pdVar8 = *(double *)(((int)in_EDX - (int)in_ECX) + (int)pdVar8) *
                  (double)CONCAT44(in_XMM3_Db,in_XMM3_Da) + *pdVar8;
        pdVar8[1] = pdVar9[-1] * (double)CONCAT44(in_XMM3_Db,in_XMM3_Da) + pdVar8[1];
        dVar10 = *pdVar9;
        pdVar9 = pdVar9 + 4;
        pdVar8[2] = dVar10 * (double)CONCAT44(in_XMM3_Db,in_XMM3_Da) + pdVar8[2];
        pdVar8 = pdVar8 + 4;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
    if (iVar7 < (int)param_1) {
      pdVar9 = (double *)(*in_ECX + iVar7 * 8);
      iVar7 = param_1 - iVar7;
      do {
        *pdVar9 = *(double *)(((int)in_EDX - (int)in_ECX) + (int)pdVar9) *
                  (double)CONCAT44(in_XMM3_Db,in_XMM3_Da) + *pdVar9;
        pdVar9 = pdVar9 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}

