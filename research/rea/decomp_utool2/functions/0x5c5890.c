// rea decompile_all
// name: FUN_005c5890
// address: 0x5c5890
// body: available
// range: 0x5c5890-0x5c599c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c5890(undefined4 param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  DWORD DVar3;
  undefined4 *puVar4;
  LPCRITICAL_SECTION in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  uint uVar6;
  void *local_2c;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071a9a6;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar6 = uVar2;
  EnterCriticalSection(in_ECX);
  local_8 = 0;
  if ((param_2 < 0x80) &&
     (((uint)*(ushort *)((int)&in_ECX[1].DebugInfo + param_2 * 2) & 1 << ((char)param_1 - 1U & 0x1f)
      ) != 0)) {
    DVar3 = timeGetTime();
    if ((DAT_00c8a644 <= DVar3) || (DVar3 < DAT_00c8a644 - 1000)) {
      DAT_00c8a644 = DVar3;
    }
    puVar4 = (undefined4 *)FUN_005c4fd0(param_2,uVar6);
    piVar1 = puVar4 + 4;
    if (4 < *piVar1) {
      puVar4 = (undefined4 *)*puVar4;
    }
    FUN_005c6170(puVar4,*piVar1,DVar3);
    uVar5 = extraout_ECX;
    if (4 < local_1c) {
      FID_conflict__free(local_2c);
      uVar5 = extraout_ECX_00;
    }
    FUN_005c6210(uVar5,DVar3 - 500);
    FUN_005c5820(param_1,param_2);
  }
  LeaveCriticalSection(in_ECX);
  ExceptionList = local_10;
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}

