// rea decompile_all
// name: FUN_006247c0
// address: 0x6247c0
// body: available
// range: 0x6247c0-0x6248e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006247c0(void)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  uint *in_ECX;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint *local_24;
  LARGE_INTEGER local_20;
  ushort local_18;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&local_24;
  local_24 = in_ECX;
  uVar6 = FUN_006246b0();
  uVar4 = (uint)((ulonglong)uVar6 >> 0x20) ^ (int)in_ECX >> 0x1f ^ _DAT_00c8aac4;
  *in_ECX = *in_ECX ^ (uint)uVar6 ^ (uint)in_ECX ^ _DAT_00c8aac0;
  in_ECX[1] = in_ECX[1] ^ uVar4;
  DVar3 = timeGetTime();
  if ((DAT_00c8a644 <= DVar3) || (DVar3 < DAT_00c8a644 - 1000)) {
    DAT_00c8a644 = DVar3;
  }
  uVar6 = FUN_006246b0();
  *in_ECX = *in_ECX ^ (uint)uVar6 ^ DVar3;
  in_ECX[1] = in_ECX[1] ^ (uint)((ulonglong)uVar6 >> 0x20);
  QueryPerformanceCounter(&local_20);
  bVar5 = CARRY4(DAT_00c8a908,local_20.s.LowPart);
  uVar4 = DAT_00c8a908 + local_20.s.LowPart;
  iVar1 = DAT_00c8a90c + local_20.s.HighPart;
  uVar6 = FUN_006246b0();
  *in_ECX = *in_ECX ^ (uint)uVar6 ^ uVar4;
  in_ECX[1] = in_ECX[1] ^ (uint)((ulonglong)uVar6 >> 0x20) ^ iVar1 + (uint)bVar5;
  uVar2 = DAT_00c8a904;
  uVar4 = DAT_00c8a900;
  uVar6 = FUN_006246b0();
  *in_ECX = *in_ECX ^ (uint)uVar6 ^ uVar4;
  in_ECX[1] = in_ECX[1] ^ (uint)((ulonglong)uVar6 >> 0x20) ^ uVar2;
  FUN_004d0a43(&local_20);
  uVar7 = FUN_006246b0();
  lVar8 = __allmul(local_20.s.LowPart,local_20.s.HighPart,1000,0);
  uVar7 = lVar8 + (ulonglong)local_18 ^ uVar7;
  *local_24 = *local_24 ^ (uint)uVar7;
  local_24[1] = local_24[1] ^ (uint)(uVar7 >> 0x20);
  _DAT_00c8aac0 = _DAT_00c8aac0 ^ *local_24;
  _DAT_00c8aac4 = _DAT_00c8aac4 ^ local_24[1];
  __security_check_cookie(local_c ^ (uint)&local_24);
  return;
}

