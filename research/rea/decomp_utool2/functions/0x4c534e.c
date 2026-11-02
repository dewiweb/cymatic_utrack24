// rea decompile_all
// name: ___vcrt_initialize_locks
// address: 0x4c534e
// body: available
// range: 0x4c534e-0x4c5389 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___vcrt_initialize_locks
   
   Library: Visual Studio 2015 Release */

undefined4 ___vcrt_initialize_locks(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  puVar3 = &DAT_00c89e94;
  uVar2 = 0;
  do {
    iVar1 = ___vcrt_InitializeCriticalSectionEx(puVar3,4000,0);
    if (iVar1 == 0) {
      ___vcrt_uninitialize_locks();
      return 0;
    }
    DAT_00c89eac = DAT_00c89eac + 1;
    uVar2 = uVar2 + 0x18;
    puVar3 = puVar3 + 0x18;
  } while (uVar2 < 0x18);
  return 1;
}

