// rea decompile_all
// name: FUN_004944e0
// address: 0x4944e0
// body: available
// range: 0x4944e0-0x4945d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004944e0(char param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  undefined4 uVar4;
  int in_ECX;
  
  if (param_1 != '\0') {
    if (*(int *)(in_ECX + 4) == 0) {
      FUN_006906c0();
    }
    else {
      lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(in_ECX + 4) + 0x84);
      EnterCriticalSection(lpCriticalSection);
      if ((0 < *(int *)(in_ECX + 0x14)) && (FUN_006906c0(), *(int *)(in_ECX + 4) != 0)) {
        FUN_00690c60();
      }
      LeaveCriticalSection(lpCriticalSection);
    }
    puVar2 = (undefined4 *)FUN_00458890();
    DVar3 = GetFileAttributesW((LPCWSTR)*puVar2);
    if (((DVar3 & 0x10) == 0) || (DVar3 == 0xffffffff)) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
    *(char *)(in_ECX + 0x6c) = cVar1;
    if (cVar1 != '\0') {
      if (*(int *)(in_ECX + 100) == 0) {
        operator_new(0x70);
        uVar4 = FUN_006bba60(*(undefined4 *)(*(int *)(in_ECX + 0x5c) + 0x34),
                             *(undefined4 *)(in_ECX + 0x70));
        FUN_006bb850(in_ECX + 0x54,*(byte *)(*(int *)(in_ECX + 0x5c) + 0x3c) & 1,
                     (byte)(*(uint *)(*(int *)(in_ECX + 0x5c) + 0x3c) >> 1) & 1);
        FUN_004945e0(uVar4,1);
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(in_ECX + 0x50) + 4);
      if (UNRECOVERED_JUMPTABLE != FUN_00494780) {
                    /* WARNING: Could not recover jumptable at 0x004945d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      FUN_00494790();
    }
  }
  return;
}

