// rea decompile_all
// name: FUN_005b4120
// address: 0x5b4120
// body: available
// range: 0x5b4120-0x5b455a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005b41cd) */
/* WARNING: Removing unreachable block (ram,0x005b41b8) */
/* WARNING: Removing unreachable block (ram,0x005b41c1) */
/* WARNING: Removing unreachable block (ram,0x005b41d0) */
/* WARNING: Removing unreachable block (ram,0x005b41e2) */
/* WARNING: Removing unreachable block (ram,0x005b41e5) */
/* WARNING: Removing unreachable block (ram,0x005b4208) */
/* WARNING: Removing unreachable block (ram,0x005b4204) */
/* WARNING: Removing unreachable block (ram,0x005b421c) */
/* WARNING: Removing unreachable block (ram,0x005b4227) */
/* WARNING: Removing unreachable block (ram,0x005b4234) */
/* WARNING: Removing unreachable block (ram,0x005b423d) */
/* WARNING: Removing unreachable block (ram,0x005b424b) */
/* WARNING: Removing unreachable block (ram,0x005b426a) */
/* WARNING: Removing unreachable block (ram,0x005b4266) */
/* WARNING: Removing unreachable block (ram,0x005b427e) */
/* WARNING: Removing unreachable block (ram,0x005b4289) */
/* WARNING: Removing unreachable block (ram,0x005b4296) */
/* WARNING: Removing unreachable block (ram,0x005b429f) */
/* WARNING: Removing unreachable block (ram,0x005b44ba) */
/* WARNING: Removing unreachable block (ram,0x005b42a7) */
/* WARNING: Removing unreachable block (ram,0x005b42c6) */
/* WARNING: Removing unreachable block (ram,0x005b42c2) */
/* WARNING: Removing unreachable block (ram,0x005b42da) */
/* WARNING: Removing unreachable block (ram,0x005b42e5) */
/* WARNING: Removing unreachable block (ram,0x005b42f2) */
/* WARNING: Removing unreachable block (ram,0x005b42fb) */
/* WARNING: Removing unreachable block (ram,0x005b44af) */
/* WARNING: Removing unreachable block (ram,0x005b44c3) */
/* WARNING: Removing unreachable block (ram,0x005b44d2) */
/* WARNING: Removing unreachable block (ram,0x005b4303) */
/* WARNING: Removing unreachable block (ram,0x005b4322) */
/* WARNING: Removing unreachable block (ram,0x005b431e) */
/* WARNING: Removing unreachable block (ram,0x005b4336) */
/* WARNING: Removing unreachable block (ram,0x005b4341) */
/* WARNING: Removing unreachable block (ram,0x005b434e) */
/* WARNING: Removing unreachable block (ram,0x005b4357) */
/* WARNING: Removing unreachable block (ram,0x005b4493) */
/* WARNING: Removing unreachable block (ram,0x005b435f) */
/* WARNING: Removing unreachable block (ram,0x005b437e) */
/* WARNING: Removing unreachable block (ram,0x005b437a) */
/* WARNING: Removing unreachable block (ram,0x005b4392) */
/* WARNING: Removing unreachable block (ram,0x005b439d) */
/* WARNING: Removing unreachable block (ram,0x005b43aa) */
/* WARNING: Removing unreachable block (ram,0x005b43b3) */
/* WARNING: Removing unreachable block (ram,0x005b43bb) */
/* WARNING: Removing unreachable block (ram,0x005b4477) */
/* WARNING: Removing unreachable block (ram,0x005b44d5) */
/* WARNING: Removing unreachable block (ram,0x005b44e3) */
/* WARNING: Removing unreachable block (ram,0x005b44f0) */
/* WARNING: Removing unreachable block (ram,0x005b4241) */
/* WARNING: Removing unreachable block (ram,0x005b43be) */
/* WARNING: Removing unreachable block (ram,0x005b43cd) */
/* WARNING: Removing unreachable block (ram,0x005b43da) */
/* WARNING: Removing unreachable block (ram,0x005b43e3) */
/* WARNING: Removing unreachable block (ram,0x005b43fe) */
/* WARNING: Removing unreachable block (ram,0x005b4406) */
/* WARNING: Removing unreachable block (ram,0x005b4414) */
/* WARNING: Removing unreachable block (ram,0x005b4422) */
/* WARNING: Removing unreachable block (ram,0x005b4435) */
/* WARNING: Removing unreachable block (ram,0x005b4443) */
/* WARNING: Removing unreachable block (ram,0x005b4451) */
/* WARNING: Removing unreachable block (ram,0x005b4464) */
/* WARNING: Removing unreachable block (ram,0x005b4509) */
/* WARNING: Removing unreachable block (ram,0x005b4510) */
/* WARNING: Removing unreachable block (ram,0x005b451e) */
/* WARNING: Removing unreachable block (ram,0x005b452b) */
/* WARNING: Removing unreachable block (ram,0x005b4534) */
/* WARNING: Removing unreachable block (ram,0x005b4539) */

undefined4 FUN_005b4120(void)

{
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0071922b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_EDX = 0;
  local_8 = 1;
  uStack_7 = 0;
  FUN_00635720(*in_ECX);
  local_8 = 0;
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return 0;
}

