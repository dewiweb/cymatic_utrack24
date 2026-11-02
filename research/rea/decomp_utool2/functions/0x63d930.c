// rea decompile_all
// name: FUN_0063d930
// address: 0x63d930
// body: available
// range: 0x63d930-0x63d9fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0063d9d7) */

void FUN_0063d930(void)

{
  char cVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 local_20;
  undefined4 local_1c;
  ushort local_18;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  FUN_004d0a43(&local_20);
  uVar4 = __allmul(local_20,local_1c,1000,0);
  uVar2 = (uint)local_18;
  uVar3 = (uint)uVar4 + uVar2;
  cVar1 = *(char *)(in_ECX + 5);
  while (cVar1 == '\0') {
    cVar1 = FUN_0063c280();
    if (cVar1 == '\0') {
      if (DAT_00c8a8f0 == (HANDLE)0x0) {
        Sleep(1);
      }
      else {
        WaitForSingleObject(DAT_00c8a8f0,1);
      }
    }
    FUN_004d0a43(&local_20);
    lVar5 = __allmul(local_20,local_1c,1000,0);
    if (CONCAT44((int)((ulonglong)uVar4 >> 0x20) + (uint)CARRY4((uint)uVar4,uVar2) +
                 (uint)(0xffffffeb < uVar3),uVar3 + 0x14) <= (longlong)(lVar5 + (ulonglong)local_18)
       ) break;
    cVar1 = *(char *)(in_ECX + 5);
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

