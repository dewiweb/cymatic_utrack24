// rea decompile_all
// name: FUN_00601a30
// address: 0x601a30
// body: available
// range: 0x601a30-0x601c4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00601a30(int param_1,int param_2,int param_3,uint param_4,int param_5,uint param_6)

{
  LPCRITICAL_SECTION lpCriticalSection;
  void *_Dst;
  uint *puVar1;
  uint uVar2;
  int iVar3;
  DWORD DVar4;
  int *piVar5;
  DWORD DVar6;
  int in_ECX;
  int iVar7;
  uint uVar8;
  uint local_24;
  int local_20;
  uint local_14;
  
  DVar4 = timeGetTime();
  if ((DAT_00c8a644 <= DVar4) || (DVar4 < DAT_00c8a644 - 1000)) {
    DAT_00c8a644 = DVar4;
  }
  local_20 = param_5;
  local_14 = param_4;
  FUN_004364e0(param_3,param_4,param_5,&param_6,*(undefined4 *)(in_ECX + 0x18),
               *(undefined4 *)(in_ECX + 0x1c));
  lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 0x78);
  EnterCriticalSection(lpCriticalSection);
  *(uint *)(in_ECX + 0x68) = param_4;
  *(int *)(in_ECX + 0x6c) = param_5;
  local_24 = param_6;
  if ((int)param_6 < 1) {
LAB_00601c38:
    LeaveCriticalSection(lpCriticalSection);
    return 1;
  }
  do {
    iVar7 = *(int *)(in_ECX + 0x98) + -1;
    if (-1 < iVar7) {
      piVar5 = (int *)(*(int *)(in_ECX + 0x90) + iVar7 * 4);
LAB_00601ac7:
      puVar1 = (uint *)*piVar5;
      if (((param_5 < (int)puVar1[1]) || ((param_5 <= (int)puVar1[1] && (param_4 < *puVar1)))) ||
         (((int)puVar1[3] <= param_5 && (((int)puVar1[3] < param_5 || (puVar1[2] <= param_4))))))
      break;
      uVar2 = *puVar1;
      uVar8 = local_24;
      if ((int)(puVar1[2] - param_4) < (int)local_24) {
        uVar8 = puVar1[2] - param_4;
      }
      iVar7 = 0;
      if (0 < param_2) {
        do {
          iVar3 = *(int *)(param_1 + iVar7 * 4);
          if (iVar3 != 0) {
            _Dst = (void *)(iVar3 + param_3 * 4);
            if (iVar7 < *(int *)(in_ECX + 0x20)) {
              FUN_004c2c30(_Dst,*(int *)(puVar1[7] + iVar7 * 4) + (param_4 - uVar2) * 4);
            }
            else {
              _memset(_Dst,0,uVar8 * 4);
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < param_2);
      }
      param_3 = param_3 + uVar8;
      param_4 = local_14 + uVar8;
      param_5 = local_20 + ((int)uVar8 >> 0x1f) + (uint)CARRY4(local_14,uVar8);
      local_24 = local_24 - uVar8;
      local_20 = param_5;
      local_14 = param_4;
      goto LAB_00601b4b;
    }
LAB_00601af4:
    if (-1 < *(int *)(in_ECX + 0x74)) {
      DVar6 = timeGetTime();
      if ((DAT_00c8a644 <= DVar6) || (DVar6 < DAT_00c8a644 - 1000)) {
        DAT_00c8a644 = DVar6;
      }
      if (*(int *)(in_ECX + 0x74) + DVar4 <= DVar6) {
        iVar7 = 0;
        if (0 < param_2) {
          do {
            iVar3 = *(int *)(param_1 + iVar7 * 4);
            if (iVar3 != 0) {
              _memset((void *)(iVar3 + param_3 * 4),0,local_24 * 4);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < param_2);
        }
        goto LAB_00601c38;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x78));
    Sleep(0);
    EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x78));
LAB_00601b4b:
    if ((int)local_24 < 1) {
      LeaveCriticalSection(lpCriticalSection);
      return 1;
    }
  } while( true );
  piVar5 = piVar5 + -1;
  iVar7 = iVar7 + -1;
  if (iVar7 < 0) goto LAB_00601af4;
  goto LAB_00601ac7;
}

