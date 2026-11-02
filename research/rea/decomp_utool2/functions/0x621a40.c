// rea decompile_all
// name: FUN_00621a40
// address: 0x621a40
// body: available
// range: 0x621a40-0x621af9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00621a40(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar5 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar3 = 0x40;
      iVar6 = 0;
      uVar4 = 0x7f;
      if ((bVar1 & 0x40) != 0) {
        do {
          if (uVar3 < 9) break;
          uVar3 = uVar3 >> 1;
          iVar6 = iVar6 + 1;
          uVar4 = uVar4 >> 1;
        } while ((uVar5 & uVar3) != 0);
      }
      uVar5 = uVar5 & uVar4;
      for (; (iVar6 = iVar6 + -1, -1 < iVar6 && ((*param_1 & 0xc0) == 0x80)); param_1 = param_1 + 1)
      {
        uVar5 = uVar5 << 6 | *param_1 & 0x3f;
      }
    }
    iVar6 = FID_conflict___iswdigit_l((wint_t)uVar5);
    uVar3 = FUN_00443260();
    iVar2 = FID_conflict___iswdigit_l((wint_t)uVar3);
    if (iVar6 == 0) {
      return -(uint)(iVar2 != 0);
    }
    if (iVar2 == 0) {
      return 1;
    }
    if (uVar5 < uVar3) {
      return -1;
    }
    if (uVar3 < uVar5) {
      return 1;
    }
  } while( true );
}

