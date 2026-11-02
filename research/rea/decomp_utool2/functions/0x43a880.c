// rea decompile_all
// name: FUN_0043a880
// address: 0x43a880
// body: available
// range: 0x43a880-0x43ab1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0043a880(int param_1,int param_2,int param_3,uint param_4,int param_5,uint param_6)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_2c;
  int local_28;
  int local_24;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  
  if (0 < (int)param_6) {
    local_28 = param_5;
    local_2c = param_4;
    do {
      uVar2 = *(uint *)(in_ECX + 0x3c8);
      uVar3 = (uVar2 - param_4) + *(int *)(in_ECX + 0x3cc);
      if (((int)uVar2 >> 0x1f <= local_28) &&
         ((((int)uVar2 >> 0x1f < local_28 || (uVar2 <= param_4)) && (0 < (int)uVar3)))) {
        uVar2 = param_6;
        if ((int)uVar3 < (int)param_6) {
          uVar2 = uVar3;
        }
        iVar4 = param_2;
        if (*(int *)(in_ECX + 0x330) < param_2) {
          iVar4 = *(int *)(in_ECX + 0x330);
        }
        while (iVar4 = iVar4 + -1, -1 < iVar4) {
          iVar5 = *(int *)(param_1 + iVar4 * 4);
          if (iVar5 != 0) {
            FUN_004c2c30(iVar5 + param_3 * 4,
                         *(int *)(*(int *)(in_ECX + 0x33c) + iVar4 * 4) +
                         (local_2c - *(int *)(in_ECX + 0x3c8)) * 4,uVar2 * 4);
          }
        }
        param_4 = local_2c + uVar2;
        local_28 = local_28 + ((int)uVar2 >> 0x1f) + (uint)CARRY4(local_2c,uVar2);
        param_6 = param_6 - uVar2;
        param_3 = param_3 + uVar2;
        local_2c = param_4;
        if (param_6 == 0) {
          return 1;
        }
      }
      uVar2 = *(uint *)(in_ECX + 0x3c8);
      if ((local_28 < (int)uVar2 >> 0x1f) || ((local_28 <= (int)uVar2 >> 0x1f && (param_4 < uVar2)))
         ) {
LAB_0043a993:
        *(undefined4 *)(in_ECX + 0x3cc) = *(undefined4 *)(in_ECX + 0x334);
        local_18 = 0;
        uVar2 = 0;
        if (0 < (int)param_4) {
          uVar2 = param_4;
        }
        *(uint *)(in_ECX + 0x3c8) = uVar2;
        if (*(int *)(in_ECX + 0xa8) < 2) {
          uVar3 = 0xffffff7d;
          local_c = 0xffffffff;
        }
        else {
          uVar3 = *(uint *)(in_ECX + 0xa0);
        }
        if (uVar2 != uVar3) {
          FUN_005d1e10(in_ECX + 0x50,uVar2,(int)uVar2 >> 0x1f);
        }
        iVar4 = *(int *)(in_ECX + 0x3cc);
        local_24 = 0;
        for (; param_4 = local_2c, 0 < iVar4; iVar4 = iVar4 - local_10) {
          local_10 = FUN_005d1a70(iVar4,&local_18);
          if (local_10 < 1) {
            if ((0 < iVar4) && (*(char *)(in_ECX + 0x3c4) == '\0')) {
              if ((local_24 == 0) && (iVar4 == *(int *)(in_ECX + 0x334))) {
                *(undefined1 *)(in_ECX + 0x3c4) = 1;
              }
              iVar5 = 0;
              if (0 < *(int *)(in_ECX + 0x330)) {
                local_10 = local_24 * 4;
                do {
                  _memset((void *)(*(int *)(*(int *)(in_ECX + 0x33c) + iVar5 * 4) + local_10),0,
                          iVar4 << 2);
                  iVar5 = iVar5 + 1;
                } while (iVar5 < *(int *)(in_ECX + 0x330));
              }
            }
            break;
          }
          iVar5 = *(int *)(in_ECX + 0x20);
          if (*(int *)(in_ECX + 0x330) < *(int *)(in_ECX + 0x20)) {
            iVar5 = *(int *)(in_ECX + 0x330);
          }
          iVar5 = iVar5 + -1;
          if (-1 < iVar5) {
            iVar1 = local_10 * 4;
            local_14 = local_24 * 4;
            do {
              *(undefined1 *)(in_ECX + 0x3c4) = 0;
              FUN_004c2c30(*(int *)(*(int *)(in_ECX + 0x33c) + iVar5 * 4) + local_14,
                           *(undefined4 *)(iVar5 * 4),iVar1);
              iVar5 = iVar5 + -1;
            } while (-1 < iVar5);
          }
          local_24 = local_24 + local_10;
        }
      }
      else {
        uVar2 = *(int *)(in_ECX + 0x3cc) + uVar2;
        iVar4 = (int)uVar2 >> 0x1f;
        iVar5 = ((int)param_6 >> 0x1f) + local_28 + (uint)CARRY4(param_6,param_4);
        if ((iVar4 <= iVar5) && ((iVar4 < iVar5 || (uVar2 < param_6 + param_4)))) goto LAB_0043a993;
      }
    } while (0 < (int)param_6);
  }
  return 1;
}

