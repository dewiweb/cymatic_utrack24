// rea decompile_all
// name: FUN_00611340
// address: 0x611340
// body: available
// range: 0x611340-0x611432 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00611340(void)

{
  undefined4 uVar1;
  wint_t _C;
  int iVar2;
  undefined4 *puVar3;
  int *_Memory;
  undefined4 *in_ECX;
  int iVar4;
  _locale_t unaff_EDI;
  int local_c;
  undefined *local_8;
  
  iVar4 = 0;
  do {
    local_8 = (undefined *)*in_ECX;
    FUN_0044ebd0();
    _C = FUN_00426f70();
    iVar2 = FID_conflict__iswalnum(_C,unaff_EDI);
    if (iVar2 == 0) {
      uVar1 = *in_ECX;
      local_8 = (undefined *)uVar1;
      FUN_0044ebd0();
      iVar2 = FUN_00426f70();
      if (iVar2 != 0x2b) {
        local_8 = (undefined *)uVar1;
        FUN_0044ebd0();
        iVar2 = FUN_00426f70();
        if (iVar2 != 0x2d) {
          local_8 = (undefined *)uVar1;
          FUN_0044ebd0();
          iVar2 = FUN_00426f70();
          if (iVar2 != 0x2e) {
            puVar3 = (undefined4 *)FUN_00637a90(&local_c);
            local_8 = &DAT_00c01e9c;
            FUN_0044ec90();
            iVar2 = FUN_0045e0d0(*puVar3);
            iVar4 = iVar4 + 1;
            if (iVar2 != 0) {
              iVar4 = 0;
            }
            _Memory = (int *)(local_c + -8);
            if (_Memory != &DAT_00bfe124) {
              LOCK();
              iVar2 = *_Memory;
              *_Memory = *_Memory + -1;
              UNLOCK();
              if (iVar2 == 0) {
                FID_conflict__free(_Memory);
              }
            }
            return iVar4;
          }
        }
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

