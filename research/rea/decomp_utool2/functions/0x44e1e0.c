// rea decompile_all
// name: FUN_0044e1e0
// address: 0x44e1e0
// body: available
// range: 0x44e1e0-0x44e293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0044e1e0(int *param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  wchar_t *pwVar3;
  uint uVar4;
  undefined4 *puVar5;
  _Ctypevec *p_Var6;
  undefined **ppuVar7;
  _Ctypevec local_24;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ffa7f;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    puVar5 = operator_new(0x18);
    local_8 = 0;
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 == 0) {
      ppuVar7 = &PTR_00c094f8;
    }
    else {
      ppuVar7 = *(undefined ***)(iVar1 + 0x18);
      if (ppuVar7 == (undefined **)0x0) {
        ppuVar7 = (undefined **)(iVar1 + 0x1c);
      }
    }
    FUN_0044df30(ppuVar7);
    puVar5[1] = 0;
    *puVar5 = std::ctype<char>::vftable;
    p_Var6 = __Getctype(&local_24);
    psVar2 = p_Var6->_Table;
    iVar1 = p_Var6->_Delfl;
    pwVar3 = p_Var6->_LocaleName;
    puVar5[2] = p_Var6->_Page;
    puVar5[3] = psVar2;
    puVar5[4] = iVar1;
    puVar5[5] = pwVar3;
    *param_1 = (int)puVar5;
    FUN_0044e010(uVar4);
  }
  ExceptionList = local_10;
  return 2;
}

