// rea decompile_all
// name: FUN_0042ed8b
// address: 0x42ed8b
// body: available
// range: 0x42ed8b-0x42ef32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0042ed8b(int param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint local_5c;
  int local_58;
  int *local_54;
  uint local_40;
  uint local_3c;
  int local_34 [12];
  
  piVar7 = *(int **)(param_1 + 0x214);
  local_54 = piVar7;
  local_58 = FUN_0042ebd3(param_1,&local_40);
  uVar5 = local_40;
  if ((local_58 == 0) &&
     (puVar1 = (uint *)FUN_00411912(local_40 * 0x18 + 0x14,&local_58), local_58 == 0)) {
    puVar1[2] = 0xffffffff;
    puVar1[4] = 0;
    puVar1[1] = local_3c;
    *puVar1 = uVar5;
    puVar1[3] = (uint)(puVar1 + 5);
    if (uVar5 != 0) {
      iVar6 = 0;
      piVar4 = local_34;
      local_5c = local_40;
      do {
        *(int *)(iVar6 + puVar1[3]) = piVar4[-1];
        *(int *)(puVar1[3] + 4 + iVar6) = *piVar4 << 0x10;
        *(int *)(puVar1[3] + 0xc + iVar6) = piVar4[1] << 0x10;
        iVar2 = puVar1[3] + iVar6;
        *(int *)(iVar2 + 8) = (*(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 4)) / 2;
        *(undefined4 *)(puVar1[3] + 0x14 + iVar6) = 0xffffffff;
        *(undefined4 *)(puVar1[3] + 0x10 + iVar6) = 0xffffffff;
        iVar2 = _strcmp(*(char **)(puVar1[3] + iVar6),"Weight");
        if (iVar2 == 0) {
          *(undefined4 *)(puVar1[3] + 0x10 + iVar6) = 0x77676874;
        }
        else {
          iVar2 = _strcmp(*(char **)(puVar1[3] + iVar6),"Width");
          if (iVar2 == 0) {
            *(undefined4 *)(puVar1[3] + 0x10 + iVar6) = 0x77647468;
          }
          else {
            iVar2 = _strcmp(*(char **)(puVar1[3] + iVar6),"OpticalSize");
            if (iVar2 == 0) {
              *(undefined4 *)(puVar1[3] + 0x10 + iVar6) = 0x6f70737a;
            }
          }
        }
        piVar4 = piVar4 + 3;
        iVar6 = iVar6 + 0x18;
        local_5c = local_5c - 1;
        piVar7 = local_54;
      } while (local_5c != 0);
    }
    if (*piVar7 == 1 << ((byte)piVar7[1] & 0x1f)) {
      FUN_0042ecad(piVar7[1]);
      uVar5 = 0;
      if (local_40 != 0) {
        local_5c = 0;
        do {
          uVar3 = FUN_0042ec3c();
          uVar5 = uVar5 + 1;
          *(undefined4 *)(puVar1[3] + 8 + local_5c) = uVar3;
          local_5c = local_5c + 0x18;
        } while (uVar5 < local_40);
      }
    }
    *param_2 = (int)puVar1;
  }
  return local_58;
}

