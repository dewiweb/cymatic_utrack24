// rea decompile_all
// name: FUN_0063f270
// address: 0x63f270
// body: available
// range: 0x63f270-0x63f3fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063f270(void)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *in_ECX;
  int in_EDX;
  uint uVar6;
  int *_Memory;
  undefined1 auStack_58 [15];
  char local_49;
  int local_48;
  undefined4 *local_44;
  uint local_40;
  int local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_00c76070 ^ (uint)auStack_58;
  local_34 = 0;
  uVar2 = *(uint *)(in_EDX + 0xc);
  uStack_2c = 0;
  local_44 = in_ECX;
  if (uVar2 < *(uint *)(in_EDX + 8)) {
    uVar4 = *(uint *)(in_EDX + 8) - uVar2;
    uVar6 = 0xc;
    if (uVar4 < 0xc) {
      uVar6 = uVar4;
    }
    if (uVar6 != 0) {
      FUN_004c2c30(&local_30,*(int *)(in_EDX + 4) + uVar2,uVar6);
      *(int *)(in_EDX + 0xc) = *(int *)(in_EDX + 0xc) + uVar6;
    }
  }
  uVar3 = (ushort)uStack_2c << 8 | (ushort)uStack_2c >> 8;
  local_40 = (uint)uVar3;
  local_48 = 0;
  if (uVar3 != 0) {
    do {
      uVar2 = *(uint *)(in_EDX + 0xc);
      local_30 = 0;
      uStack_2c = 0;
      uStack_24 = 0;
      if (uVar2 < *(uint *)(in_EDX + 8)) {
        uVar4 = *(uint *)(in_EDX + 8) - uVar2;
        uVar6 = 0x10;
        if (uVar4 < 0x10) {
          uVar6 = uVar4;
        }
        if (uVar6 != 0) {
          FUN_004c2c30(&local_30,*(int *)(in_EDX + 4) + uVar2,uVar6);
          *(int *)(in_EDX + 0xc) = *(int *)(in_EDX + 0xc) + uVar6;
        }
      }
      FUN_0045ca20(&local_30);
      iVar1 = local_3c;
      iVar5 = FUN_0045c1e0(local_3c,&DAT_00c049a4);
      local_49 = iVar5 == 0;
      _Memory = (int *)(iVar1 + -8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar1 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(_Memory);
        }
      }
      if (local_49 != '\0') {
        FUN_0063f400(uStack_2c._4_4_ >> 0x18 | (uStack_2c._4_4_ & 0xff0000) >> 8 |
                     (uStack_2c._4_4_ & 0xff00) << 8 | uStack_2c._4_4_ << 0x18,0);
        __security_check_cookie(local_14 ^ (uint)auStack_58);
        return;
      }
      local_48 = local_48 + 1;
    } while (local_48 < (int)(local_40 & 0xffff));
  }
  *local_44 = &DAT_00bfe12c;
  __security_check_cookie(local_14 ^ (uint)auStack_58);
  return;
}

