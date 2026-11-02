// rea decompile_all
// name: FUN_10004030
// address: 0x10004030
// body: available
// range: 0x10004030-0x100040e8 inclusive
// range: 0x100040f0-0x100042bc inclusive
// range: 0x100042c0-0x100042f9 inclusive
// range: 0x10004300-0x10004379 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100041e1 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100041ea to 0x1000937c FUN_1000937c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_10004030(void *this,CArchive *param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint local_58 [7];
  uint *local_3c;
  void *local_38;
  uint local_34;
  CArchive *local_30;
  uint *local_2c;
  uint *local_28;
  uint local_24 [6];
  undefined2 local_c;
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_30 = param_1;
  local_38 = this;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    local_28 = (uint *)CArchive::ReadCount(param_1);
    while (local_28 != (uint *)0x0) {
      uVar4 = 1;
      local_28 = (uint *)((int)local_28 - 1);
      local_24[0] = 0xffffffff;
      local_24[1] = 0xffffffff;
      local_24[2] = 0xffffffff;
      local_24[3] = 0xffffffff;
      local_24[4] = 0xffffffff;
      local_24[5] = 0xffffffff;
      local_c = 0;
      local_a = 0;
      if ((~(byte)*(undefined4 *)(param_1 + 0x18) & 1) == 0) {
        local_2c = &local_34;
        do {
          uVar6 = uVar4;
          if (0x1ffffffe < uVar4) {
            uVar6 = 0x1fffffff;
          }
          uVar1 = CArchive::Read(local_30,local_2c,uVar6 * 4);
          if (uVar1 != uVar6 * 4) goto LAB_100041e6;
          local_2c = local_2c + uVar6;
          uVar4 = uVar4 - uVar6;
        } while (uVar4 != 0);
      }
      else {
        local_2c = &local_34;
        uVar4 = 1;
        do {
          uVar6 = uVar4;
          if (0x1ffffffe < uVar4) {
            uVar6 = 0x1fffffff;
          }
          CArchive::Write(local_30,local_2c,uVar6 * 4);
          local_2c = local_2c + uVar6;
          uVar4 = uVar4 - uVar6;
        } while (uVar4 != 0);
      }
      uVar4 = 1;
      if ((~(byte)*(undefined4 *)(local_30 + 0x18) & 1) == 0) {
        local_2c = local_24;
        do {
          uVar6 = uVar4;
          if (0x4924923 < uVar4) {
            uVar6 = 0x4924924;
          }
          uVar1 = CArchive::Read(local_30,local_2c,uVar6 * 0x1c);
          if (uVar1 != uVar6 * 0x1c) {
LAB_100041e6:
                    /* WARNING: Subroutine does not return */
            FUN_1000937c(3,(char *)0x0);
          }
          local_2c = local_2c + uVar6 * 7;
          uVar4 = uVar4 - uVar6;
        } while (uVar4 != 0);
      }
      else {
        local_2c = local_24;
        do {
          uVar6 = uVar4;
          if (0x4924923 < uVar4) {
            uVar6 = 0x4924924;
          }
          CArchive::Write(local_30,local_2c,uVar6 * 0x1c);
          local_2c = local_2c + uVar6 * 7;
          uVar4 = uVar4 - uVar6;
        } while (uVar4 != 0);
      }
      puVar5 = local_24;
      puVar2 = local_58;
      for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar2 = (uint *)FUN_10003930(local_38,local_34);
      puVar5 = local_58;
      for (iVar3 = 7; param_1 = local_30, iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
    }
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)((int)this + 0xc));
    if ((*(int *)((int)this + 0xc) != 0) && (local_34 = 0, *(int *)((int)this + 8) != 0)) {
      do {
        local_2c = *(uint **)(*(int *)((int)this + 4) + local_34 * 4);
        if (local_2c != (uint *)0x0) {
          do {
            local_3c = local_2c + 1;
            if (local_2c == (uint *)0x0) {
LAB_100041e1:
                    /* WARNING: Subroutine does not return */
              FUN_10009068();
            }
            local_28 = local_2c;
            if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
              uVar4 = 1;
              do {
                uVar6 = uVar4;
                if (0x1ffffffe < uVar4) {
                  uVar6 = 0x1fffffff;
                }
                uVar1 = CArchive::Read(local_30,local_28,uVar6 * 4);
                if (uVar1 != uVar6 * 4) goto LAB_100041e6;
                local_28 = local_28 + uVar6;
                uVar4 = uVar4 - uVar6;
              } while (uVar4 != 0);
            }
            else {
              uVar4 = 1;
              do {
                uVar6 = uVar4;
                if (0x1ffffffe < uVar4) {
                  uVar6 = 0x1fffffff;
                }
                CArchive::Write(local_30,local_28,uVar6 * 4);
                local_28 = local_28 + uVar6;
                uVar4 = uVar4 - uVar6;
              } while (uVar4 != 0);
            }
            if (local_3c == (uint *)0x0) goto LAB_100041e1;
            uVar4 = 1;
            local_28 = local_3c;
            if ((~(byte)*(undefined4 *)(local_30 + 0x18) & 1) == 0) {
              do {
                uVar6 = uVar4;
                if (0x4924923 < uVar4) {
                  uVar6 = 0x4924924;
                }
                uVar1 = CArchive::Read(local_30,local_28,uVar6 * 0x1c);
                if (uVar1 != uVar6 * 0x1c) goto LAB_100041e6;
                local_28 = local_28 + uVar6 * 7;
                uVar4 = uVar4 - uVar6;
              } while (uVar4 != 0);
            }
            else {
              do {
                uVar6 = uVar4;
                if (0x4924923 < uVar4) {
                  uVar6 = 0x4924924;
                }
                CArchive::Write(local_30,local_28,uVar6 * 0x1c);
                local_28 = local_28 + uVar6 * 7;
                uVar4 = uVar4 - uVar6;
              } while (uVar4 != 0);
            }
            local_2c = (uint *)local_2c[8];
            param_1 = local_30;
          } while (local_2c != (uint *)0x0);
          local_2c = (uint *)0x0;
          this = local_38;
        }
        local_34 = local_34 + 1;
        if (*(uint *)((int)this + 8) <= local_34) {
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      } while( true );
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

