// rea decompile_all
// name: FUN_0045c8b0
// address: 0x45c8b0
// body: available
// range: 0x45c8b0-0x45c94a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045c8b0(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_ECX;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  
  pbVar5 = param_2;
  do {
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (bVar1 != 0);
  iVar6 = (int)pbVar5 - (int)(param_2 + 1);
  pbVar5 = param_2;
  iVar2 = iVar6;
joined_r0x0045c8dd:
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) goto LAB_0045c908;
    iVar3 = FUN_00443260();
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    if ((iVar3 - (uint)bVar1 != 0) &&
       (((int)(iVar3 - (uint)bVar1) >> 0x1f & 0xfffffffeU) != 0xffffffff)) {
      bVar1 = *param_1;
      if (bVar1 == 0) goto LAB_0045c908;
      param_1 = param_1 + 1;
      pbVar5 = param_2;
      iVar2 = iVar6;
      if ((char)bVar1 < '\0') {
        uVar4 = 0x40;
        if ((bVar1 & 0x40) != 0) {
          do {
            if (uVar4 < 9) break;
            param_1 = param_1 + 1;
            uVar4 = uVar4 >> 1;
          } while ((uVar4 & (int)(char)bVar1) != 0);
        }
      }
      goto joined_r0x0045c8dd;
    }
    if (iVar3 == 0) {
LAB_0045c908:
      *in_ECX = param_1;
      return;
    }
  } while( true );
}

