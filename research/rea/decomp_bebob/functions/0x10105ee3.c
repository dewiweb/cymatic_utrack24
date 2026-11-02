// rea decompile_all
// name: FUN_10105ee3
// address: 0x10105ee3
// body: available
// range: 0x10105ee3-0x101060b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101060b9 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10105ee3(void)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  errno_t eVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *unaff_EDI;
  uint uVar9;
  uint uVar10;
  int local_c;
  long local_8;
  
  local_8 = 0;
  eVar4 = FID_conflict___get_dstbias(&local_8);
  if (eVar4 != 0) {
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (local_8 == 0) {
    return false;
  }
  uVar9 = unaff_EDI[5];
  if ((uVar9 != DAT_101640f8) || (uVar9 != DAT_10164104)) {
    if (DAT_1016ae94 == 0) {
      iVar8 = 2;
      local_c = 1;
      if ((int)uVar9 < 0x6b) {
        iVar8 = 1;
        local_c = 5;
      }
      FUN_10105cec((void *)0x2,1,1,uVar9,iVar8,0,0,0,0,0);
      FUN_10105cec((void *)0x2,0,1,unaff_EDI[5],local_c,0,0,0,0,0);
    }
    else {
      if (DAT_1016ae80 != 0) {
        uVar10 = (uint)DAT_1016ae86;
        uVar5 = 0;
        uVar6 = 0;
      }
      else {
        uVar5 = (uint)DAT_1016ae84;
        uVar10 = 0;
        uVar6 = (uint)DAT_1016ae86;
      }
      FUN_10105cec((void *)(uint)DAT_1016ae88,1,(uint)(DAT_1016ae80 == 0),uVar9,uVar6,uVar5,uVar10,
                   (uint)DAT_1016ae8a,(uint)DAT_1016ae8c,(uint)DAT_1016ae8e);
      if (DAT_1016ae2c != 0) {
        uVar10 = (uint)DAT_1016ae32;
        uVar5 = 0;
        uVar6 = 0;
        uVar9 = unaff_EDI[5];
      }
      else {
        uVar5 = (uint)DAT_1016ae30;
        uVar10 = 0;
        uVar6 = (uint)DAT_1016ae32;
        uVar9 = unaff_EDI[5];
      }
      FUN_10105cec((void *)(uint)DAT_1016ae34,0,(uint)(DAT_1016ae2c == 0),uVar9,uVar6,uVar5,uVar10,
                   (uint)DAT_1016ae36,(uint)DAT_1016ae38,(uint)DAT_1016ae3a);
    }
  }
  iVar8 = unaff_EDI[7];
  if (DAT_101640fc < DAT_10164108) {
    if ((iVar8 < DAT_101640fc) || (DAT_10164108 < iVar8)) {
      return false;
    }
    if ((DAT_101640fc < iVar8) && (iVar8 < DAT_10164108)) {
      return true;
    }
  }
  else {
    if (iVar8 < DAT_10164108) {
      return true;
    }
    if (DAT_101640fc < iVar8) {
      return true;
    }
    if ((DAT_10164108 < iVar8) && (iVar8 < DAT_101640fc)) {
      return false;
    }
  }
  iVar7 = ((unaff_EDI[2] * 0x3c + unaff_EDI[1]) * 0x3c + *unaff_EDI) * 1000;
  if (iVar8 == DAT_101640fc) {
    bVar2 = DAT_10164100 <= iVar7;
  }
  else {
    bVar2 = iVar7 < DAT_1016410c;
  }
  return bVar2;
}

