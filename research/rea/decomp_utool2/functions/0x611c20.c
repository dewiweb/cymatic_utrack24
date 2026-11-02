// rea decompile_all
// name: FUN_00611c20
// address: 0x611c20
// body: available
// range: 0x611c20-0x611d16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00611cd7) */
/* WARNING: Removing unreachable block (ram,0x00611c45) */

void FUN_00611c20(void)

{
  int iVar1;
  undefined4 *puVar2;
  byte bVar3;
  uint uVar4;
  _SYSTEM_INFO local_3c;
  undefined4 local_18;
  uint local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar1 = cpuid_Version_info(1);
  uVar4 = *(uint *)(iVar1 + 0xc);
  DAT_00cfff88 = (byte)(*(uint *)(iVar1 + 8) >> 0x17) & 1;
  bVar3 = (byte)(*(uint *)(iVar1 + 8) >> 0x18);
  DAT_00cfff89 = bVar3 >> 1 & 1;
  DAT_00cfff8a = bVar3 >> 2 & 1;
  uStack_10._0_1_ = (byte)uVar4;
  DAT_00cfff8b = (byte)uStack_10 & 1;
  DAT_00cfff90 = (byte)(uVar4 >> 0x1c) & 1;
  DAT_00cfff8d = (byte)(uVar4 >> 9) & 1;
  DAT_00cfff8e = (byte)(uVar4 >> 0x13) & 1;
  DAT_00cfff8f = (byte)(uVar4 >> 0x14) & 1;
  DAT_00cfff8c = (*(uint *)(iVar1 + 4) & 0x80000000) != 0;
  puVar2 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
  local_18 = *puVar2;
  local_c = puVar2[2];
  _local_14 = CONCAT44(puVar2[3],puVar2[1]);
  DAT_00cfff91 = (byte)((uint)puVar2[1] >> 5) & 1;
  GetNativeSystemInfo(&local_3c);
  DAT_00cfff84 = local_3c.dwNumberOfProcessors;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

