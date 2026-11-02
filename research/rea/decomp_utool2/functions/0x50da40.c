// rea decompile_all
// name: FUN_0050da40
// address: 0x50da40
// body: available
// range: 0x50da40-0x50dcbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050da40(uint param_1,undefined4 param_2)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_10;
  undefined4 local_c;
  
  cVar1 = FUN_0050d9e0(param_1);
  if (param_1 < *(uint *)(in_ECX + 0xd0)) {
    iVar3 = *(int *)(*(int *)(in_ECX + 200) + param_1 * 4);
  }
  else {
    iVar3 = 0;
  }
  if ((char)param_2 == '\0') {
    if (cVar1 == '\0') {
      uVar4 = 0;
      if (0 < *(int *)(in_ECX + 0xd0)) {
        do {
          if (uVar4 != param_1) {
            if (uVar4 < *(uint *)(in_ECX + 0xd0)) {
              iVar2 = *(int *)(*(int *)(in_ECX + 200) + uVar4 * 4);
            }
            else {
              iVar2 = 0;
            }
            if ((*(char *)(iVar2 + 0x7b8) != '\0') || (*(char *)(iVar2 + 0x7bb) == '\0')) {
              if (uVar4 < *(uint *)(in_ECX + 0xd0)) {
                iVar2 = *(int *)(*(int *)(in_ECX + 200) + uVar4 * 4);
              }
              else {
                iVar2 = 0;
              }
              if (*(char *)(iVar2 + 0x7b8) == '\0') {
                *(undefined1 *)(iVar2 + 0x7b9) = 0;
                if ((*(char *)(iVar2 + 0x7bb) != '\0') ||
                   (local_c = 1, *(char *)(iVar2 + 0x7ba) == '\0')) {
                  local_c = 0;
                }
                FUN_006e5380(local_c,0);
              }
            }
          }
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < *(int *)(in_ECX + 0xd0));
      }
    }
    else {
      if (*(char *)(iVar3 + 0x7b8) != '\0') goto LAB_0050dc99;
      *(undefined1 *)(iVar3 + 0x7b9) = 1;
      FUN_006e5380(*(char *)(iVar3 + 0x7bb) == '\0',0);
    }
  }
  else {
    if (*(char *)(iVar3 + 0x7b8) == '\0') {
      *(undefined1 *)(iVar3 + 0x7b9) = 0;
      if ((*(char *)(iVar3 + 0x7bb) != '\0') || (local_c = 1, *(char *)(iVar3 + 0x7ba) == '\0')) {
        local_c = 0;
      }
      FUN_006e5380(local_c,0);
    }
    if ((cVar1 == '\0') && (uVar4 = 0, 0 < *(int *)(in_ECX + 0xd0))) {
      do {
        if (uVar4 != param_1) {
          if (uVar4 < *(uint *)(in_ECX + 0xd0)) {
            iVar2 = *(int *)(*(int *)(in_ECX + 200) + uVar4 * 4);
          }
          else {
            iVar2 = 0;
          }
          if ((*(char *)(iVar2 + 0x7b8) != '\0') || (*(char *)(iVar2 + 0x7bb) == '\0')) {
            if (uVar4 < *(uint *)(in_ECX + 0xd0)) {
              iVar2 = *(int *)(*(int *)(in_ECX + 200) + uVar4 * 4);
            }
            else {
              iVar2 = 0;
            }
            if (*(char *)(iVar2 + 0x7b8) == '\0') {
              *(undefined1 *)(iVar2 + 0x7b9) = 1;
              FUN_006e5380(*(char *)(iVar2 + 0x7bb) == '\0',0);
            }
          }
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < *(int *)(in_ECX + 0xd0));
    }
  }
  if (*(char *)(iVar3 + 0x7b8) == '\0') {
    FUN_006e5380(param_2,0);
    *(char *)(iVar3 + 0x7bb) = (char)param_2;
    local_10._1_3_ = (uint3)((uint)(in_ECX + -0x70) >> 8);
    if (((*(char *)(iVar3 + 0x7b8) == '\0') && ((char)param_2 == '\0')) &&
       ((*(char *)(iVar3 + 0x7ba) != '\0' || (*(char *)(iVar3 + 0x7b9) != '\0')))) {
      local_10 = CONCAT31(local_10._1_3_,1);
    }
    else {
      local_10 = (uint)local_10._1_3_ << 8;
    }
    FUN_006e5380(local_10,0);
  }
LAB_0050dc99:
  FUN_0050d880();
  *(undefined1 *)(in_ECX + 0x49) = 1;
  FUN_00515db0(1);
  return;
}

