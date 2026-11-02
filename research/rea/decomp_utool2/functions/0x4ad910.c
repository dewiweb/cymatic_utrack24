// rea decompile_all
// name: FUN_004ad910
// address: 0x4ad910
// body: available
// range: 0x4ad910-0x4adcfd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004ad910(void)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  int *in_EDX;
  uint uVar6;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  local_1c = 0x10028;
  local_18 = 2;
  local_14 = 0;
  uVar1 = in_EDX[1];
  local_c = uVar1 & 6;
  local_8 = CONCAT31(local_8._1_3_,(char)uVar1) & 0xffffff01;
  uVar4 = uVar1 >> 1 & 1;
  local_10 = CONCAT31(local_10._1_3_,local_c != 0);
  uVar6 = uVar4 + 1;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar6 = uVar4;
  }
  cVar2 = FUN_006e5ec0(&local_1c);
  if (cVar2 == '\0') {
    local_1c = 0x10026;
    local_18 = 2;
    local_14 = 0;
    cVar2 = FUN_006e5ec0(&local_1c);
    if (cVar2 == '\0') {
      if (uVar6 < 2) {
        iVar5 = *in_EDX;
        if (iVar5 == 0x10025) {
          if (local_c == 0) {
            iVar5 = *(int *)(in_ECX + 0x110) + -1;
          }
          else {
            iVar5 = FUN_00692c20(*(int *)(in_ECX + 0x110));
          }
          FUN_00697280();
          FUN_00696020(iVar5,local_8);
          return 1;
        }
        if (iVar5 == 0x10027) {
          uVar3 = FUN_00694bf0(local_10,local_8);
          return uVar3;
        }
        if (iVar5 == 0x10024) {
          if (local_c != 0) {
            uVar3 = FUN_00694950(local_8);
            return uVar3;
          }
          uVar3 = FUN_00694900(local_8);
          return uVar3;
        }
        if (iVar5 == 0x10023) {
          if (local_c != 0) {
            uVar3 = FUN_006948d0(local_8);
            return uVar3;
          }
          uVar3 = FUN_00694870(local_8);
          return uVar3;
        }
      }
      if (uVar6 == 0) {
        iVar5 = *in_EDX;
        if (iVar5 == 0x10026) {
          uVar3 = FUN_00694b70(local_8);
          return uVar3;
        }
        if (iVar5 == 0x10028) {
          uVar3 = FUN_00694ae0(local_8);
          return uVar3;
        }
        if (iVar5 == 0x10021) {
          uVar3 = FUN_00694a60(local_8);
          return uVar3;
        }
        if (iVar5 == 0x10022) {
          uVar3 = FUN_006949d0(local_8);
          return uVar3;
        }
      }
      local_1c = 99;
      local_18 = 2;
      local_14 = 0;
      cVar2 = FUN_006e5ec0(&local_1c);
      if (cVar2 == '\0') {
        local_1c = 0x1002d;
        local_18 = 2;
        local_14 = 0;
        cVar2 = FUN_006e5ec0(&local_1c);
        if (cVar2 == '\0') {
          local_1c = 0x78;
          local_18 = 2;
          local_14 = 0;
          cVar2 = FUN_006e5ec0(&local_1c);
          if (cVar2 == '\0') {
            local_1c = 0x1002e;
            local_18 = 1;
            local_14 = 0;
            cVar2 = FUN_006e5ec0(&local_1c);
            if (cVar2 == '\0') {
              local_1c = 0x76;
              local_18 = 2;
              local_14 = 0;
              cVar2 = FUN_006e5ec0(&local_1c);
              if (cVar2 == '\0') {
                local_1c = 0x1002d;
                local_18 = 1;
                local_14 = 0;
                cVar2 = FUN_006e5ec0(&local_1c);
                if (cVar2 == '\0') {
                  if (uVar6 < 2) {
                    if (*in_EDX == 8) {
                      uVar3 = FUN_006947f0(local_10);
                      return uVar3;
                    }
                    if (*in_EDX == 0x1002e) {
                      uVar3 = FUN_006947a0(extraout_ECX);
                      return uVar3;
                    }
                  }
                  local_1c = 0x61;
                  local_18 = 2;
                  local_14 = 0;
                  cVar2 = FUN_006e5ec0(&local_1c);
                  if (cVar2 != '\0') {
                    uVar3 = FUN_00694640();
                    return uVar3;
                  }
                  local_1c = 0x7a;
                  local_18 = 2;
                  local_14 = 0;
                  cVar2 = FUN_006e5ec0(&local_1c);
                  if (cVar2 != '\0') {
                    uVar3 = FUN_00697200(1);
                    return uVar3;
                  }
                  local_1c = 0x79;
                  local_18 = 2;
                  local_14 = 0;
                  cVar2 = FUN_006e5ec0(&local_1c);
                  if (cVar2 == '\0') {
                    local_1c = 0x7a;
                    local_18 = 3;
                    local_14 = 0;
                    cVar2 = FUN_006e5ec0(&local_1c);
                    if (cVar2 == '\0') {
                      return 0;
                    }
                  }
                  uVar3 = FUN_00697200(0);
                  return uVar3;
                }
              }
              FUN_00697280();
              FUN_00695c40();
              return 1;
            }
          }
          uVar3 = FUN_006946d0();
          return uVar3;
        }
      }
      uVar3 = FUN_00694740();
      return uVar3;
    }
    iVar5 = *(int *)(in_ECX + 0x7c) + 0x110;
    if (iVar5 != 0) {
      FUN_006b02e0(0xffffffff,iVar5);
      return 1;
    }
  }
  else {
    iVar5 = *(int *)(in_ECX + 0x7c) + 0x110;
    if (iVar5 != 0) {
      FUN_006b02e0(1,iVar5);
    }
  }
  return 1;
}

