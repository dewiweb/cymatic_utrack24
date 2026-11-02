// rea decompile_all
// name: FUN_00630730
// address: 0x630730
// body: available
// range: 0x630730-0x6307d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00630730(void)

{
  undefined8 uVar1;
  DWORD DVar2;
  DWORD DVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  
  uVar1 = rdtsc();
  DVar2 = timeGetTime();
  if ((DAT_00c8a644 <= DVar2) || (DVar2 < DAT_00c8a644 - 1000)) {
    DAT_00c8a644 = DVar2;
  }
  iVar6 = 0;
  do {
    do {
      DVar3 = timeGetTime();
      if ((DAT_00c8a644 <= DVar3) || (DVar3 < DAT_00c8a644 - 1000)) {
        DAT_00c8a644 = DVar3;
      }
      uVar5 = DVar3 - DVar2;
      uVar8 = rdtsc();
    } while (uVar5 < 0x51);
    uVar8 = __alldiv((uint)uVar8 - (uint)uVar1,
                     ((int)((ulonglong)uVar8 >> 0x20) - (int)((ulonglong)uVar1 >> 0x20)) -
                     (uint)((uint)uVar8 < (uint)uVar1),uVar5,0);
    iVar4 = __alldiv(uVar8,1000,0);
  } while ((uVar5 < 0x1f5) && ((bVar7 = iVar6 != iVar4, iVar6 = iVar4, bVar7 || (iVar4 < 0x65))));
  return;
}

