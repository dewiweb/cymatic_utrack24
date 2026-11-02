// rea decompile_all
// name: FUN_00612470
// address: 0x612470
// body: available
// range: 0x612470-0x61254e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00612470(void)

{
  uint uVar1;
  undefined4 *puVar2;
  HANDLE pvVar3;
  LPVOID pvVar4;
  undefined4 *in_ECX;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  _SYSTEM_INFO local_30;
  
  if ((-1 < (int)in_ECX[3]) && ((0 < (int)in_ECX[3] || (in_ECX[2] != 0)))) {
    GetNativeSystemInfo(&local_30);
    iVar5 = in_ECX[3];
    uVar1 = in_ECX[2];
    uVar7 = __allrem(uVar1,iVar5,local_30.dwAllocationGranularity,0);
    uVar6 = uVar1 - (uint)uVar7;
    in_ECX[2] = uVar6;
    iVar5 = (iVar5 - (int)((ulonglong)uVar7 >> 0x20)) - (uint)(uVar1 < (uint)uVar7);
    in_ECX[3] = iVar5;
    if (((int)in_ECX[5] <= iVar5) && (((int)in_ECX[5] < iVar5 || ((uint)in_ECX[4] < uVar6)))) {
      in_ECX[4] = uVar6;
      in_ECX[5] = iVar5;
    }
  }
  puVar2 = (undefined4 *)FUN_00458890();
  pvVar3 = CreateFileW((LPCWSTR)*puVar2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000080,
                       (HANDLE)0x0);
  if (pvVar3 != (HANDLE)0xffffffff) {
    in_ECX[6] = pvVar3;
    pvVar3 = CreateFileMappingW(pvVar3,(LPSECURITY_ATTRIBUTES)0x0,2,in_ECX[5],in_ECX[4],(LPCWSTR)0x0
                               );
    if (pvVar3 != (HANDLE)0x0) {
      pvVar4 = MapViewOfFile(pvVar3,4,in_ECX[3],in_ECX[2],in_ECX[4] - in_ECX[2]);
      *in_ECX = pvVar4;
      if (pvVar4 == (LPVOID)0x0) {
        in_ECX[2] = 0;
        in_ECX[3] = 0;
        in_ECX[4] = 0;
        in_ECX[5] = 0;
      }
      CloseHandle(pvVar3);
    }
  }
  return;
}

