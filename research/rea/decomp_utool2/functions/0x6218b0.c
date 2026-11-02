// rea decompile_all
// name: FUN_006218b0
// address: 0x6218b0
// body: available
// range: 0x6218b0-0x621a33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006218b0(char *param_1,char *param_2)

{
  bool bVar1;
  wint_t _C;
  wint_t _C_00;
  int iVar2;
  _locale_t plVar3;
  _locale_t plVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  _locale_t unaff_EDI;
  char *local_c;
  char *local_8;
  
  bVar1 = true;
  do {
    cVar6 = *param_1;
    if ((cVar6 == ' ') || ((cVar6 < '\x0e' && ('\b' < cVar6)))) {
      cVar6 = '\x01';
    }
    else {
      cVar6 = '\0';
    }
    cVar7 = *param_2;
    if ((cVar7 == ' ') || ((cVar7 < '\x0e' && ('\b' < cVar7)))) {
      cVar7 = '\x01';
    }
    else {
      cVar7 = '\0';
    }
    if ((!bVar1) && (cVar7 != cVar6)) {
      return (uint)(cVar7 != '\0') * 2 + -1;
    }
    bVar1 = false;
    if (cVar6 != '\0') {
      FUN_0045c2c0(param_1);
      param_1 = local_8;
    }
    if (cVar7 != '\0') {
      FUN_0045c2c0(param_2);
      param_2 = local_c;
    }
    if (((byte)(*param_1 - 0x30U) < 10) && ((byte)(*param_2 - 0x30U) < 10)) {
      iVar2 = FUN_00426f70();
      if ((iVar2 == 0x30) || (iVar2 = FUN_00426f70(), iVar2 == 0x30)) {
        iVar2 = FUN_00621a40(param_1,param_2);
      }
      else {
        iVar2 = FUN_00621b00(param_1,param_2);
      }
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    plVar3 = (_locale_t)FUN_00443260();
    plVar4 = (_locale_t)FUN_00443260();
    if (plVar3 != plVar4) {
      _C = _towupper((wint_t)plVar3);
      plVar3 = (_locale_t)(uint)_C;
      _C_00 = _towupper((wint_t)plVar4);
      if (plVar3 != (_locale_t)(uint)_C_00) {
        plVar4 = plVar3;
        iVar2 = FID_conflict__iswalnum(_C,unaff_EDI);
        iVar5 = FID_conflict__iswalnum(_C_00,plVar4);
        if (iVar5 == 0) {
          if (iVar2 != 0) {
            return 1;
          }
        }
        else if (iVar2 == 0) {
          return -1;
        }
        return (-(uint)(plVar3 < (_locale_t)(uint)_C_00) & 0xfffffffe) + 1;
      }
    }
  } while (plVar3 != (_locale_t)0x0);
  return 0;
}

