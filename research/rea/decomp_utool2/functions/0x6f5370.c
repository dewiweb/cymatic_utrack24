// rea decompile_all
// name: thunk_FUN_006f5760
// address: 0x6f5370
// body: available
// range: 0x6f5370-0x6f5374 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_006f5760(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  int in_XMM0_Da;
  uint in_XMM0_Db;
  int in_XMM0_Dc;
  uint in_XMM0_Dd;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [12];
  uint uStack_5c;
  int iStack_58;
  uint uStack_54;
  
  auVar1._4_4_ = -(uint)(0x40ff4000 < (in_XMM0_Db & 0x7fffffff));
  auVar1._0_4_ = -(uint)(0 < in_XMM0_Da);
  auVar1._8_4_ = -(uint)(0 < in_XMM0_Dc);
  auVar1._12_4_ = -(uint)(0x40ff4000 < (in_XMM0_Dd & 0x7fffffff));
  iVar2 = movmskpd(&stack0x00000000,auVar1);
  if (iVar2 != 0) {
    uStack_5c = in_XMM0_Db & 0x7fffffff;
    uStack_54 = in_XMM0_Dd & 0x7fffffff;
    iStack_58 = in_XMM0_Dc;
    FUN_006f6360(CONCAT44(in_XMM0_Db,in_XMM0_Da) & 0x7fffffffffffffff,auStack_70);
    FUN_006f6360(CONCAT44(uStack_54,iStack_58),auStack_68);
  }
  return;
}

