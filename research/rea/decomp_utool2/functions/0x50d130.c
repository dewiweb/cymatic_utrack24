// rea decompile_all
// name: FUN_0050d130
// address: 0x50d130
// body: available
// range: 0x50d130-0x50d2ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050d130(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x140)) {
    bVar5 = *(int *)(in_ECX + 0x140) != 0;
    do {
      if (bVar5) {
        iVar4 = *(int *)(*(int *)(in_ECX + 0x138) + uVar3 * 4);
      }
      else {
        iVar4 = 0;
      }
      if (*(char *)(iVar4 + 0x7b8) == '\0') {
        *(undefined1 *)(iVar4 + 0x7b9) = 0;
        if ((*(char *)(iVar4 + 0x7bb) != '\0') || (local_14 = 1, *(char *)(iVar4 + 0x7ba) == '\0'))
        {
          local_14 = 0;
        }
        FUN_006e5380(local_14,0);
        if (*(char *)(iVar4 + 0x7b8) == '\0') {
          *(undefined1 *)(iVar4 + 0x7ba) = 0;
          if ((*(char *)(iVar4 + 0x7bb) != '\0') || (local_10 = 1, *(char *)(iVar4 + 0x7b9) == '\0')
             ) {
            local_10 = 0;
          }
          FUN_006e5380(local_10,0);
          if (*(char *)(iVar4 + 0x7b8) == '\0') {
            FUN_006e5380(0,0);
            *(undefined1 *)(iVar4 + 0x7bb) = 0;
            if (*(char *)(iVar4 + 0x7b8) == '\0') {
              if ((*(char *)(iVar4 + 0x7ba) != '\0') ||
                 (local_18 = 0, *(char *)(iVar4 + 0x7b9) != '\0')) {
                local_18 = 1;
              }
            }
            else {
              local_18 = 0;
            }
            FUN_006e5380(local_18,0);
          }
        }
      }
      iVar2 = 0;
      if (*(int *)(in_ECX + 0xbc) == 3) {
        iVar2 = -0xc;
      }
      fVar6 = (float)iVar2;
      *(float *)(iVar4 + 0x7bc) = fVar6;
      if (0.0 < fVar6) {
LAB_0050d29f:
        FUN_0050a760();
      }
      else {
        fVar7 = -64.0;
        if (-64.0 <= fVar6) {
          fVar7 = fVar6;
        }
        if (*(float *)(iVar4 + 0x330) != fVar7) {
          *(float *)(iVar4 + 0x330) = fVar7;
          cVar1 = FUN_006e2bd0();
          if (cVar1 == '\0') goto LAB_0050d29f;
        }
      }
      if (*(char *)(iVar4 + 0x7b8) == '\0') {
        *(undefined4 *)(iVar4 + 0x7c0) = 0;
        FUN_0049b400(3);
      }
      FUN_0050b1c0(0);
      uVar3 = uVar3 + 1;
      bVar5 = uVar3 < *(uint *)(in_ECX + 0x140);
    } while ((int)uVar3 < (int)*(uint *)(in_ECX + 0x140));
  }
  return;
}

