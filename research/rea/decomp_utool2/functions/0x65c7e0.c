// rea decompile_all
// name: FUN_0065c7e0
// address: 0x65c7e0
// body: available
// range: 0x65c7e0-0x65c8ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065c7e0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  int local_c;
  char local_5;
  
  local_c = 0;
  in_ECX[1] = 0;
  puVar1 = (undefined4 *)FUN_004c554b(0x54);
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x36;
    *(undefined4 *)(*in_ECX + 0x18) = 0;
    (**(code **)*in_ECX)();
  }
  *puVar1 = FUN_0065d3c0;
  puVar1[1] = FUN_0065d2f0;
  puVar1[2] = FUN_0065d240;
  puVar1[3] = FUN_0065d190;
  puVar1[4] = FUN_0065d120;
  puVar1[5] = FUN_0065d0b0;
  puVar1[6] = FUN_0065cf30;
  puVar1[7] = FUN_0065cca0;
  puVar1[8] = FUN_0065cb40;
  puVar1[9] = FUN_0065ca30;
  puVar1[10] = FUN_0065c900;
  puVar1[0xc] = 1000000000;
  puVar1[0xb] = local_c;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xf] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0x54;
  in_ECX[1] = (int)puVar1;
  iVar2 = FUN_004d36e1("JPEGMEM");
  if (iVar2 != 0) {
    local_5 = 'x';
    iVar2 = FUN_00464310(iVar2,"%ld%c",&local_c,&local_5);
    if (0 < iVar2) {
      if ((local_5 == 'm') || (local_5 == 'M')) {
        local_c = local_c * 1000;
      }
      puVar1[0xb] = local_c * 1000;
    }
  }
  return;
}

