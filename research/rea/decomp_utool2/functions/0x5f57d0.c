// rea decompile_all
// name: FUN_005f57d0
// address: 0x5f57d0
// body: available
// range: 0x5f57d0-0x5f5a72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005f57d0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *in_EDX;
  uint uVar3;
  int iVar4;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  _memset(in_EDX,0,0xa0);
  iVar1 = FUN_005fec40(0x80);
  if (((iVar1 != 0) && (iVar1 = FUN_005fee30(0x40), iVar1 != 0)) &&
     (iVar1 = FUN_005feec0(1), iVar1 != 0)) {
    *(uint *)((int)in_EDX + 0x90) = (uint)(local_8 != 0);
    iVar1 = FUN_005fedb0();
    if ((iVar1 != 0) && (iVar1 = FUN_005feec0(8), iVar1 != 0)) {
      *(uint *)((int)in_EDX + 0x94) = local_8;
      if (local_8 != 0) {
        iVar1 = FUN_005fe5a0();
        *(int *)((int)in_EDX + 0x98) = iVar1;
        if (iVar1 == 0) {
LAB_005f5a62:
          *(undefined4 *)*in_ECX = 8;
          return 0;
        }
        local_10 = 0;
        if (*(int *)((int)in_EDX + 0x94) != 0) {
          local_14 = 0;
          do {
            iVar4 = *(int *)((int)in_EDX + 0x98) + local_14;
            iVar1 = FUN_005fee30(0x40);
            if (iVar1 == 0) {
              return 0;
            }
            iVar1 = FUN_005feec0(8);
            if (iVar1 == 0) {
              return 0;
            }
            *(char *)(iVar4 + 8) = (char)local_8;
            iVar1 = FUN_005fec40(0xc);
            if (iVar1 == 0) {
              return 0;
            }
            iVar1 = FUN_005feec0(1);
            if (iVar1 == 0) {
              return 0;
            }
            *(uint *)(iVar4 + 0x18) =
                 *(uint *)(iVar4 + 0x18) ^ (*(uint *)(iVar4 + 0x18) ^ local_8) & 1;
            iVar1 = FUN_005feec0(1);
            if (iVar1 == 0) {
              return 0;
            }
            *(uint *)(iVar4 + 0x18) =
                 *(uint *)(iVar4 + 0x18) ^ (local_8 * 2 ^ *(uint *)(iVar4 + 0x18)) & 2;
            iVar1 = FUN_005fedb0();
            if (iVar1 == 0) {
              return 0;
            }
            iVar1 = FUN_005feec0(8);
            if (iVar1 == 0) {
              return 0;
            }
            *(char *)(iVar4 + 0x1c) = (char)local_8;
            if ((char)local_8 != '\0') {
              iVar1 = FUN_005fe5a0();
              *(int *)(iVar4 + 0x20) = iVar1;
              if (iVar1 == 0) goto LAB_005f5a62;
              uVar3 = 0;
              if (*(char *)(iVar4 + 0x1c) != '\0') {
                local_c = 0;
                do {
                  iVar1 = *(int *)(iVar4 + 0x20);
                  iVar2 = FUN_005fee30(0x40);
                  if (iVar2 == 0) {
                    return 0;
                  }
                  iVar2 = FUN_005feec0(8);
                  if (iVar2 == 0) {
                    return 0;
                  }
                  *(char *)(iVar1 + local_c + 8) = (char)local_8;
                  iVar1 = FUN_005fedb0();
                  if (iVar1 == 0) {
                    return 0;
                  }
                  uVar3 = uVar3 + 1;
                  local_c = local_c + 0x10;
                } while (uVar3 < *(byte *)(iVar4 + 0x1c));
              }
            }
            local_10 = local_10 + 1;
            local_14 = local_14 + 0x28;
          } while (local_10 < *(uint *)((int)in_EDX + 0x94));
        }
      }
      return 1;
    }
  }
  return 0;
}

