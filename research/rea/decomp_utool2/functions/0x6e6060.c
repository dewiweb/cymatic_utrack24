// rea decompile_all
// name: FUN_006e6060
// address: 0x6e6060
// body: available
// range: 0x6e6060-0x6e6168 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e6060(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD DVar4;
  int in_ECX;
  int *piVar5;
  
  if (param_1 != 0) {
    iVar2 = FUN_006b4470();
    if (iVar2 == 0) {
      operator_new(0x78);
      uVar3 = FUN_00494c50();
      if (*(int *)(in_ECX + 0x34) < *(int *)(in_ECX + 0x38) + 1) {
        FUN_00409cf0();
      }
      iVar2 = *(int *)(in_ECX + 0x38);
      *(int *)(in_ECX + 0x38) = iVar2 + 1;
      *(undefined4 *)(*(int *)(in_ECX + 0x30) + iVar2 * 4) = uVar3;
      if (0 < *(int *)(in_ECX + 0x18)) {
        piVar5 = (int *)(*(int *)(in_ECX + 8) + 0xc);
        LOCK();
        iVar2 = *piVar5;
        if (iVar2 == 0) {
          *piVar5 = 1;
          iVar2 = 0;
        }
        UNLOCK();
        if ((iVar2 == 0) && (cVar1 = FUN_0063e270(), cVar1 == '\0')) {
          LOCK();
          *(undefined4 *)(*(int *)(in_ECX + 8) + 0xc) = 0;
          UNLOCK();
        }
      }
    }
    FUN_00494cd0(param_2,param_3,param_4,param_5,param_6);
    if (*(int *)(in_ECX + 0x24) < 1) {
      DVar4 = timeGetTime();
      if ((DAT_00c8a644 <= DVar4) || (DVar4 < DAT_00c8a644 - 1000)) {
        DAT_00c8a644 = DVar4;
      }
      *(DWORD *)(in_ECX + 0x3c) = DVar4;
      FUN_0063eb10();
    }
  }
  return;
}

