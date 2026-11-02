// rea decompile_all
// name: FUN_0045bd50
// address: 0x45bd50
// body: available
// range: 0x45bd50-0x45bdfd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45bdc8 to 0x45be27 FUN_0045be27 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x45bdd8 to 0x4bed05 FUN_004bed05 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x45bdef to 0x45be27 FUN_0045be27 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x45bdfc to 0x45be27 FUN_0045be27 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045bd50(uint param_1)

{
  uint uVar1;
  void *pvVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00700910;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar4 = param_1 | 0xf;
  if (uVar4 != 0xffffffff) {
    uVar1 = *(uint *)(in_ECX + 0x14);
    uVar3 = uVar1 >> 1;
    param_1 = uVar4;
    if ((uVar4 / 3 < uVar3) && (param_1 = uVar3 + uVar1, -uVar3 - 2 < uVar1)) {
      param_1 = 0xfffffffe;
    }
  }
  uVar4 = param_1 + 1;
  local_8 = 0;
  if (uVar4 == 0) {
    FUN_0045be27();
    return;
  }
  if (uVar4 < 0x1000) {
    operator_new(uVar4);
    FUN_0045be27();
    return;
  }
  if (uVar4 < param_1 + 0x24) {
    pvVar2 = operator_new(param_1 + 0x24);
    *(void **)(((int)pvVar2 + 0x23U & 0xffffffe0) - 4) = pvVar2;
    FUN_0045be27();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004bed05();
}

