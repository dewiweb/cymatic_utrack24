// rea decompile_all
// name: FUN_00664aa0
// address: 0x664aa0
// body: available
// range: 0x664aa0-0x664bbc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00664aa0(void)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *in_ECX;
  byte *pbVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)in_ECX[6];
  pbVar4 = (byte *)*puVar2;
  iVar5 = puVar2[1];
  do {
    if (iVar5 == 0) {
      uVar3 = (*(code *)puVar2[3])(in_ECX);
      if ((char)uVar3 == '\0') {
LAB_00664b53:
        return uVar3 & 0xffffff00;
      }
      pbVar4 = (byte *)*puVar2;
      iVar5 = puVar2[1];
    }
    bVar1 = *pbVar4;
    while( true ) {
      pbVar4 = pbVar4 + 1;
      iVar5 = iVar5 + -1;
      if (bVar1 == 0xff) break;
      *(int *)(in_ECX[0x65] + 0x14) = *(int *)(in_ECX[0x65] + 0x14) + 1;
      *puVar2 = pbVar4;
      puVar2[1] = iVar5;
      if (iVar5 == 0) {
        uVar3 = (*(code *)puVar2[3])(in_ECX);
        if ((char)uVar3 == '\0') goto LAB_00664b53;
        pbVar4 = (byte *)*puVar2;
        iVar5 = puVar2[1];
      }
      bVar1 = *pbVar4;
    }
    do {
      if (iVar5 == 0) {
        uVar3 = (*(code *)puVar2[3])(in_ECX);
        if ((char)uVar3 == '\0') goto LAB_00664b53;
        pbVar4 = (byte *)*puVar2;
        iVar5 = puVar2[1];
      }
      uVar3 = (uint)*pbVar4;
      iVar5 = iVar5 + -1;
      pbVar4 = pbVar4 + 1;
    } while (uVar3 == 0xff);
    if (uVar3 != 0) {
      if (*(int *)(in_ECX[0x65] + 0x14) != 0) {
        *(undefined4 *)(*in_ECX + 0x14) = 0x74;
        *(undefined4 *)(*in_ECX + 0x18) = *(undefined4 *)(in_ECX[0x65] + 0x14);
        *(uint *)(*in_ECX + 0x1c) = uVar3;
        (**(code **)(*in_ECX + 4))(in_ECX,0xffffffff);
        *(undefined4 *)(in_ECX[0x65] + 0x14) = 0;
      }
      in_ECX[0x5f] = uVar3;
      *puVar2 = pbVar4;
      puVar2[1] = iVar5;
      return 1;
    }
    *(int *)(in_ECX[0x65] + 0x14) = *(int *)(in_ECX[0x65] + 0x14) + 2;
    *puVar2 = pbVar4;
    puVar2[1] = iVar5;
  } while( true );
}

