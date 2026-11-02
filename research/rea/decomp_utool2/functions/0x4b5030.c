// rea decompile_all
// name: FUN_004b5030
// address: 0x4b5030
// body: available
// range: 0x4b5030-0x4b50c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004b5030(void)

{
  byte bVar1;
  undefined **in_EAX;
  int iVar2;
  int in_ECX;
  int iVar3;
  byte *pbVar4;
  
  switch(in_ECX - 2U) {
  case 0:
    in_EAX = &PTR_DAT_00c21850;
    break;
  case 1:
    in_EAX = &PTR_DAT_00c218d0;
    break;
  case 2:
    in_EAX = &PTR_DAT_00c20c10;
    break;
  case 3:
    in_EAX = &PTR_s_false_00c21440;
    break;
  case 4:
    in_EAX = &PTR_s_repeat_00c21210;
    break;
  default:
    if (0xe < in_ECX - 2U) goto LAB_004b50bd;
    in_EAX = &PTR_s_function_00c21820;
  }
  iVar3 = 0;
  pbVar4 = *in_EAX;
  while (pbVar4 != (byte *)0x0) {
    while( true ) {
      iVar2 = FUN_00443260();
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      if ((iVar2 - (uint)bVar1 != 0) &&
         (((int)(iVar2 - (uint)bVar1) >> 0x1f & 0xfffffffeU) != 0xffffffff)) break;
      if (iVar2 == 0) {
        return 1;
      }
    }
    iVar3 = iVar3 + 1;
    pbVar4 = in_EAX[iVar3];
  }
LAB_004b50bd:
  return (uint)in_EAX & 0xffffff00;
}

