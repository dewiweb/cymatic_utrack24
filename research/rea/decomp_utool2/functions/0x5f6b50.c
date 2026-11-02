// rea decompile_all
// name: FUN_005f6b50
// address: 0x5f6b50
// body: available
// range: 0x5f6b50-0x5f6cc8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005f6b50(void)

{
  void *_Memory;
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = in_ECX[1];
  *(undefined4 *)(iVar2 + 0xe8) = 0;
  *(undefined4 *)(iVar2 + 0xec) = 0;
  *(undefined4 *)(in_ECX[1] + 0xe14) = 0;
  iVar2 = *(int *)(in_ECX[1] + 0x34);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)*in_ECX = 2;
  iVar2 = in_ECX[1];
  if (*(int *)(iVar2 + 0xe18) == 0) {
    iVar1 = ___acrt_iob_func(0);
    if (*(int *)(iVar2 + 0x30) == iVar1) {
      return 0;
    }
    if ((*(code **)(iVar2 + 4) != (code *)0x0) && (iVar2 = (**(code **)(iVar2 + 4))(), iVar2 == 1))
    {
      return 0;
    }
  }
  else {
    *(undefined4 *)(iVar2 + 0xe18) = 0;
  }
  *(undefined4 *)*in_ECX = 0;
  *(undefined4 *)(in_ECX[1] + 0xf0) = 0;
  if ((*(int *)(in_ECX[1] + 0xf4) != 0) &&
     (_Memory = *(void **)(in_ECX[1] + 0x1bc), _Memory != (void *)0x0)) {
    FID_conflict__free(_Memory);
    *(undefined4 *)(in_ECX[1] + 0x1bc) = 0;
    *(undefined4 *)(in_ECX[1] + 0xf4) = 0;
  }
  *(undefined4 *)(in_ECX[1] + 0xe14) = *(undefined4 *)(*in_ECX + 0x1c);
  *(undefined4 *)(in_ECX[1] + 0xe4) = 0;
  *(undefined4 *)(in_ECX[1] + 0xe0) = 0;
  iVar2 = in_ECX[1];
  *(undefined4 *)(iVar2 + 0xe60) = 0x67452301;
  *(undefined4 *)(iVar2 + 0xe64) = 0xefcdab89;
  *(undefined4 *)(iVar2 + 0xe68) = 0x98badcfe;
  *(undefined4 *)(iVar2 + 0xe6c) = 0x10325476;
  *(undefined4 *)(iVar2 + 0xe70) = 0;
  *(undefined4 *)(iVar2 + 0xe74) = 0;
  *(undefined4 *)(iVar2 + 0xe78) = 0;
  *(undefined4 *)(iVar2 + 0xe7c) = 0;
  iVar2 = in_ECX[1];
  *(undefined4 *)(iVar2 + 0x17e0) = 0;
  *(undefined4 *)(iVar2 + 0x17e4) = 0;
  *(undefined4 *)(in_ECX[1] + 0x17f0) = 0;
  return 1;
}

