// rea decompile_all
// name: FUN_005ca4f0
// address: 0x5ca4f0
// body: available
// range: 0x5ca4f0-0x5ca611 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ca4f0(void)

{
  DWORD DVar1;
  int in_ECX;
  undefined4 *puVar2;
  uint local_18;
  DWORD local_14;
  uint local_10;
  
LAB_005ca4fe:
  do {
    if (*(char *)(in_ECX + 0x3c) != '\0') {
LAB_005ca604:
      FUN_005ca630();
      return;
    }
    DVar1 = timeGetTime();
    if ((DAT_00c8a644 <= DVar1) || (DVar1 < DAT_00c8a644 - 1000)) {
      DAT_00c8a644 = DVar1;
    }
    local_14 = 500;
    local_18 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x44));
    puVar2 = *(undefined4 **)(in_ECX + 0x5c);
    if (puVar2 != (undefined4 *)0x0) {
      local_10 = SUB84(*(double *)(puVar2 + 2) + 6755399441055744.0,0);
      local_18 = local_10;
      if (DVar1 + 0x14 < local_10) {
        local_14 = (local_10 - DVar1) - 0x14;
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *(undefined4 *)(in_ECX + 0x5c) = puVar2[6];
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x44));
    if (puVar2 != (undefined4 *)0x0) {
      if (DVar1 < local_18) {
        FUN_0062b690();
        if (*(char *)(in_ECX + 0x3c) != '\0') {
          if (4 < (int)puVar2[4]) {
            FID_conflict__free((void *)*puVar2);
          }
          FUN_004bfe14(puVar2,0x20);
          goto LAB_005ca604;
        }
      }
      if (DVar1 - 200 < local_18) {
        FUN_005c7900(puVar2);
      }
      if (4 < (int)puVar2[4]) {
        FID_conflict__free((void *)*puVar2);
      }
      FUN_004bfe14(puVar2,0x20);
      goto LAB_005ca4fe;
    }
    WaitForSingleObject(*(HANDLE *)(in_ECX + 0x2c),local_14);
  } while( true );
}

