// rea decompile_all
// name: FUN_005fe8b0
// address: 0x5fe8b0
// body: available
// range: 0x5fe8b0-0x5feb34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005fe8b0(uint param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  int *in_ECX;
  uint uVar4;
  uint *in_EDX;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_18;
  uint local_14;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  puVar1 = in_EDX + param_1;
  if (param_2 == 0) {
    if (puVar1 <= in_EDX) {
      return 1;
    }
    while (iVar2 = FUN_005feb40(), iVar2 != 0) {
      *in_EDX = local_14 >> 1 ^ -(local_14 & 1);
      in_EDX = in_EDX + 1;
      if (puVar1 <= in_EDX) {
        return 1;
      }
    }
  }
  else {
    local_10 = in_ECX[2];
    uVar7 = in_ECX[4];
    bVar3 = (byte)param_2;
    local_c = in_EDX;
    if (uVar7 < local_10) {
      param_1 = 0x20 - in_ECX[5];
      uVar5 = *(int *)(*in_ECX + uVar7 * 4) << ((byte)in_ECX[5] & 0x1f);
      goto LAB_005fe948;
    }
    local_8 = 0;
LAB_005fea5e:
    iVar2 = FUN_005feb40();
    if (iVar2 != 0) {
      param_1 = 0;
      uVar6 = local_14 + local_8;
      local_8 = 0;
LAB_005fea7c:
      if (param_2 - param_1 == 0) {
        local_18 = 0;
      }
      else {
        iVar2 = FUN_005feec0(param_2 - param_1);
        if (iVar2 == 0) {
          return 0;
        }
      }
      local_18 = local_18 | local_8;
      uVar7 = uVar6 << (bVar3 & 0x1f) | local_18;
      local_8 = 0;
      *local_c = uVar7 >> 1 ^ -(uVar7 & 1);
      local_c = local_c + 1;
      local_10 = in_ECX[2];
      uVar7 = in_ECX[4];
      param_1 = 0x20 - in_ECX[5];
      uVar5 = *(int *)(*in_ECX + uVar7 * 4) << ((byte)in_ECX[5] & 0x1f);
      local_14 = uVar6;
      if ((uVar7 < local_10) || (puVar1 <= local_c)) {
LAB_005fe948:
        do {
          if (puVar1 <= local_c) {
            if ((param_1 == 0) && (uVar7 < local_10)) {
              FUN_005ff2e0();
              uVar7 = uVar7 + 1;
              param_1 = 0x20;
            }
            in_ECX[4] = uVar7;
            in_ECX[5] = 0x20 - param_1;
            return 1;
          }
          local_8 = param_1;
          if (uVar5 == 0) goto LAB_005fe970;
          uVar4 = 0x1f;
          if (uVar5 != 0) {
            for (; uVar5 >> uVar4 == 0; uVar4 = uVar4 - 1) {
            }
          }
          uVar4 = uVar4 ^ 0x1f;
          uVar6 = uVar4;
          while (uVar4 == 0x20) {
LAB_005fe970:
            while( true ) {
              FUN_005ff2e0();
              uVar7 = uVar7 + 1;
              if (local_10 <= uVar7) {
                in_ECX[5] = 0;
                in_ECX[4] = uVar7;
                goto LAB_005fea5e;
              }
              uVar5 = *(uint *)(*in_ECX + uVar7 * 4);
              if (uVar5 != 0) break;
              local_8 = local_8 + 0x20;
            }
            uVar4 = 0x1f;
            if (uVar5 != 0) {
              for (; uVar5 >> uVar4 == 0; uVar4 = uVar4 - 1) {
              }
            }
            uVar4 = uVar4 ^ 0x1f;
            uVar6 = local_8 + uVar4;
            local_8 = uVar6;
          }
          uVar5 = (uVar5 << ((byte)uVar4 & 0x1f)) * 2;
          local_8 = uVar5 >> (0x20 - bVar3 & 0x1f);
          param_1 = (param_1 - uVar6) - 1 & 0x1f;
          if (param_1 < param_2) {
            FUN_005ff2e0();
            uVar7 = uVar7 + 1;
            if (local_10 <= uVar7) goto code_r0x005fe9ec;
            uVar5 = *(uint *)(*in_ECX + uVar7 * 4);
            param_1 = param_1 + (0x20 - param_2);
            local_8 = local_8 | uVar5 >> ((byte)param_1 & 0x1f);
            uVar5 = uVar5 << (0x20 - (byte)param_1 & 0x1f);
          }
          else {
            param_1 = param_1 - param_2;
            uVar5 = uVar5 << (bVar3 & 0x1f);
          }
          local_18 = local_8;
          local_8 = local_8 | uVar6 << (bVar3 & 0x1f);
          *local_c = local_8 >> 1 ^ -(local_8 & 1);
          local_c = local_c + 1;
          local_14 = uVar6;
        } while( true );
      }
      goto LAB_005fea5e;
    }
  }
  return 0;
code_r0x005fe9ec:
  in_ECX[4] = uVar7;
  in_ECX[5] = 0;
  goto LAB_005fea7c;
}

