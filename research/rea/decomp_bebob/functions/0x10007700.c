// rea decompile_all
// name: CDriverInterfaceClass::GetLevelMeterData
// address: 0x10007700
// body: available
// range: 0x10007700-0x10007741 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: bool __thiscall CDriverInterfaceClass::GetLevelMeterData(int,int,double *,unsigned long
   *) */

bool __thiscall
CDriverInterfaceClass::GetLevelMeterData
          (CDriverInterfaceClass *this,int param_1,int param_2,double *param_3,ulong *param_4)

{
  undefined1 uVar1;
  int iVar2;
  void *this_00;
  double **ppdVar3;
  ulong *puVar4;
  
                    /* 0x7700  15  ?GetLevelMeterData@CDriverInterfaceClass@@QAE_NHHPANPAK@Z */
  iVar2 = FUN_10006a20(this + 4,param_1);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x44) = param_2;
    ppdVar3 = &param_3;
    puVar4 = param_4;
    this_00 = (void *)FUN_10006a20(this + 4,param_1);
    uVar1 = FUN_100059b0(this_00,ppdVar3,(int *)puVar4);
    return (bool)uVar1;
  }
  return false;
}

