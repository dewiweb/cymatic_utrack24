// rea decompile_all
// name: FUN_005c6a50
// address: 0x5c6a50
// body: available
// range: 0x5c6a50-0x5c6bd0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c6a50(uint param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 (*in_ECX) [16];
  double *in_EDX;
  int iVar6;
  double *pdVar7;
  int iVar8;
  double *pdVar9;
  double dVar10;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM3_Db;
  int local_14;
  
  dVar10 = (double)CONCAT44(in_XMM3_Db,in_XMM3_Da);
  iVar6 = (int)param_1 / 2;
  if (((uint)in_ECX & 0xf) == 0) {
    if (((uint)in_EDX & 0xf) == 0) {
      if (0 < iVar6) {
        do {
          dVar5 = *in_EDX;
          pdVar7 = in_EDX + 1;
          in_EDX = in_EDX + 2;
          auVar1._8_4_ = SUB84(*pdVar7 * dVar10,0);
          auVar1._0_8_ = dVar5 * dVar10;
          auVar1._12_4_ = (int)((ulonglong)(*pdVar7 * dVar10) >> 0x20);
          *in_ECX = auVar1;
          in_ECX = in_ECX + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    else if (0 < iVar6) {
      do {
        dVar5 = *in_EDX;
        pdVar7 = in_EDX + 1;
        in_EDX = in_EDX + 2;
        auVar2._8_4_ = SUB84(*pdVar7 * dVar10,0);
        auVar2._0_8_ = dVar5 * dVar10;
        auVar2._12_4_ = (int)((ulonglong)(*pdVar7 * dVar10) >> 0x20);
        *in_ECX = auVar2;
        in_ECX = in_ECX + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else if (((uint)in_EDX & 0xf) == 0) {
    if (0 < iVar6) {
      do {
        dVar5 = *in_EDX;
        pdVar7 = in_EDX + 1;
        in_EDX = in_EDX + 2;
        auVar3._8_4_ = SUB84(*pdVar7 * dVar10,0);
        auVar3._0_8_ = dVar5 * dVar10;
        auVar3._12_4_ = (int)((ulonglong)(*pdVar7 * dVar10) >> 0x20);
        *in_ECX = auVar3;
        in_ECX = in_ECX + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else if (0 < iVar6) {
    do {
      dVar5 = *in_EDX;
      pdVar7 = in_EDX + 1;
      in_EDX = in_EDX + 2;
      auVar4._8_4_ = SUB84(*pdVar7 * dVar10,0);
      auVar4._0_8_ = dVar5 * dVar10;
      auVar4._12_4_ = (int)((ulonglong)(*pdVar7 * dVar10) >> 0x20);
      *in_ECX = auVar4;
      in_ECX = in_ECX + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  param_1 = param_1 & 1;
  if ((param_1 != 0) && (iVar6 = 0, param_1 != 0)) {
    if (3 < param_1) {
      local_14 = (param_1 - 4 >> 2) + 1;
      iVar6 = local_14 * 4;
      pdVar7 = (double *)(*in_ECX + 8);
      pdVar9 = in_EDX + 3;
      do {
        local_14 = local_14 + -1;
        *(double *)*(undefined1 (*) [16])(pdVar7 + -1) =
             pdVar9[-3] * (double)CONCAT44(in_XMM3_Db,in_XMM3_Da);
        *pdVar7 = *(double *)((int)in_EDX + (-0x20 - (int)in_ECX) + (int)(pdVar7 + 4)) *
                  (double)CONCAT44(in_XMM3_Db,in_XMM3_Da);
        pdVar7[1] = pdVar9[-1] * (double)CONCAT44(in_XMM3_Db,in_XMM3_Da);
        pdVar7[2] = (double)CONCAT44(in_XMM3_Db,in_XMM3_Da) * *pdVar9;
        pdVar7 = pdVar7 + 4;
        pdVar9 = pdVar9 + 4;
      } while (local_14 != 0);
    }
    if (iVar6 < (int)param_1) {
      iVar8 = param_1 - iVar6;
      pdVar7 = (double *)(*in_ECX + iVar6 * 8);
      do {
        *pdVar7 = *(double *)((int)pdVar7 + ((int)in_EDX - (int)in_ECX)) *
                  (double)CONCAT44(in_XMM3_Db,in_XMM3_Da);
        iVar8 = iVar8 + -1;
        pdVar7 = pdVar7 + 1;
      } while (iVar8 != 0);
    }
  }
  return;
}

