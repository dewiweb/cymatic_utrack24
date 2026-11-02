// rea decompile_all
// name: FUN_0053e9b0
// address: 0x53e9b0
// body: available
// range: 0x53e9b0-0x53ea68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053e9b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  int *_Memory;
  bool bVar3;
  uint uVar4;
  bool bVar5;
  int local_10;
  undefined4 local_c;
  char local_5;
  
  bVar3 = false;
  local_10 = 0;
  uVar4 = 0;
  local_c = 0xffffffff;
  if (0 < *(int *)(in_ECX + 0x5c)) {
    bVar5 = *(int *)(in_ECX + 0x5c) != 0;
    do {
      if ((bVar5) && (*(int *)(*(int *)(in_ECX + 0x54) + uVar4 * 4) != 0)) {
        bVar3 = true;
        puVar2 = (undefined4 *)FUN_00411300(&local_10);
        local_5 = '\x01';
        if (*(char *)*puVar2 == '\0') goto LAB_0053ea02;
      }
      else {
LAB_0053ea02:
        local_5 = '\0';
      }
      if (bVar3) {
        bVar3 = false;
        _Memory = (int *)(local_10 + -8);
        if (_Memory != &DAT_00bfe124) {
          LOCK();
          iVar1 = *_Memory;
          *_Memory = *_Memory + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(_Memory);
          }
        }
      }
      if (local_5 != '\0') {
        if (uVar4 < *(uint *)(in_ECX + 0x5c)) {
          local_c = *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x54) + uVar4 * 4) + 8);
        }
        else {
          local_c = uRam00000008;
        }
      }
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < *(uint *)(in_ECX + 0x5c);
    } while ((int)uVar4 < (int)*(uint *)(in_ECX + 0x5c));
  }
  return;
}

