// rea decompile_all
// name: FUN_0044e870
// address: 0x44e870
// body: available
// range: 0x44e870-0x44e931 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44e931 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044e870(uint param_1,char param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uVar3;
  undefined **local_1c [6];
  
  *(uint *)(in_ECX + 0xc) = param_1 & 0x17;
  uVar3 = *(uint *)(in_ECX + 0x10) & param_1 & 0x17;
  if (uVar3 == 0) {
    return;
  }
  if (param_2 == '\0') {
    if ((uVar3 & 4) != 0) goto LAB_0044e8aa;
    if ((uVar3 & 2) == 0) goto LAB_0044e904;
  }
  else {
    __CxxThrowException_8(0,0);
LAB_0044e8aa:
    uVar2 = FUN_0045c180();
    FUN_0044e6e0("ios_base::badbit set",1,uVar2);
    local_1c[0] = std::ios_base::failure::vftable;
    __CxxThrowException_8(local_1c,&DAT_00c4d178);
  }
  uVar2 = FUN_0045c180();
  FUN_0044e6e0("ios_base::failbit set",1,uVar2);
  local_1c[0] = std::ios_base::failure::vftable;
  __CxxThrowException_8(local_1c,&DAT_00c4d178);
LAB_0044e904:
  uVar2 = FUN_0045c180();
  FUN_0044e6e0("ios_base::eofbit set",1,uVar2);
  local_1c[0] = std::ios_base::failure::vftable;
  __CxxThrowException_8(local_1c,&DAT_00c4d178);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

