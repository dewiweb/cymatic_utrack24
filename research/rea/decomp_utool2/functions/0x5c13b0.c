// rea decompile_all
// name: FUN_005c13b0
// address: 0x5c13b0
// body: available
// range: 0x5c13b0-0x5c162b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c13b0(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 0xc4);
  EnterCriticalSection(lpCriticalSection);
  uVar1 = *(uint *)(in_ECX + 0xf0);
  iVar5 = *(int *)(in_ECX + 0xf4);
  uVar8 = *(uint *)(in_ECX + 0xe0);
  if ((((*(int *)(in_ECX + 0xe4) < iVar5) ||
       ((*(int *)(in_ECX + 0xe4) <= iVar5 && (uVar8 <= uVar1)))) &&
      (uVar8 = uVar1, *(int *)(in_ECX + 0xec) <= iVar5)) &&
     ((*(int *)(in_ECX + 0xec) < iVar5 || (*(uint *)(in_ECX + 0xe8) < uVar1)))) {
    uVar8 = *(uint *)(in_ECX + 0xe8);
  }
  uVar8 = uVar8 - *(int *)(in_ECX + 0xf0);
  uVar1 = param_1[2];
  uVar6 = uVar1 + *(uint *)(in_ECX + 0xf0);
  iVar5 = ((int)uVar1 >> 0x1f) + *(int *)(in_ECX + 0xf4) +
          (uint)CARRY4(uVar1,*(uint *)(in_ECX + 0xf0));
  uVar1 = *(uint *)(in_ECX + 0xe8);
  uVar7 = *(uint *)(in_ECX + 0xe0);
  if (((*(int *)(in_ECX + 0xe4) < iVar5) || ((*(int *)(in_ECX + 0xe4) <= iVar5 && (uVar7 <= uVar6)))
      ) && ((iVar5 < *(int *)(in_ECX + 0xec) ||
            ((uVar7 = uVar1, iVar5 <= *(int *)(in_ECX + 0xec) && (uVar6 <= uVar1)))))) {
    uVar7 = uVar6;
  }
  uVar7 = uVar7 - *(int *)(in_ECX + 0xf0);
  if (uVar8 == uVar7) {
    if (*param_1 != 0) {
      FUN_00409ea0(param_1[1],param_1[2]);
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
  }
  else {
    if (0 < (int)uVar8) {
      FUN_00409ea0(param_1[1],uVar8);
    }
    if ((int)uVar7 < param_1[2]) {
      FUN_00409ea0(param_1[1] + uVar7,param_1[2] - uVar7);
    }
    if ((int)uVar8 < (int)uVar7) {
      iVar5 = *(int *)(in_ECX + 0x28);
      if (*(int *)*param_1 < *(int *)(in_ECX + 0x28)) {
        iVar5 = *(int *)*param_1;
      }
      iVar5 = iVar5 + -1;
      if (-1 < iVar5) {
        do {
          iVar2 = __allrem(*(uint *)(in_ECX + 0xf0) + uVar8,
                           *(int *)(in_ECX + 0xf4) + ((int)uVar8 >> 0x1f) +
                           (uint)CARRY4(*(uint *)(in_ECX + 0xf0),uVar8),*(int *)(in_ECX + 0x30),
                           *(int *)(in_ECX + 0x30) >> 0x1f);
          iVar3 = __allrem(*(uint *)(in_ECX + 0xf0) + uVar7,
                           *(int *)(in_ECX + 0xf4) + ((int)uVar7 >> 0x1f) +
                           (uint)CARRY4(*(uint *)(in_ECX + 0xf0),uVar7),*(int *)(in_ECX + 0x30),
                           *(int *)(in_ECX + 0x30) >> 0x1f);
          if (iVar2 < iVar3) {
            iVar3 = uVar7 - uVar8;
            iVar4 = param_1[1] + uVar8;
          }
          else {
            iVar4 = *(int *)(in_ECX + 0x30) - iVar2;
            FUN_00425840(iVar5,param_1[1] + uVar8,in_ECX + 0x2c,iVar5,iVar2,iVar4);
            iVar3 = (uVar7 - iVar4) - uVar8;
            iVar2 = 0;
            iVar4 = iVar4 + uVar8 + param_1[1];
          }
          FUN_00425840(iVar5,iVar4,in_ECX + 0x2c,iVar5,iVar2,iVar3);
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
    }
    uVar1 = param_1[2];
    uVar8 = *(uint *)(in_ECX + 0xf0);
    *(uint *)(in_ECX + 0xf0) = uVar1 + uVar8;
    *(uint *)(in_ECX + 0xf4) =
         ((int)uVar1 >> 0x1f) + *(int *)(in_ECX + 0xf4) + (uint)CARRY4(uVar1,uVar8);
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}

