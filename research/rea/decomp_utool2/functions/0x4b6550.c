// rea decompile_all
// name: FUN_004b6550
// address: 0x4b6550
// body: available
// range: 0x4b6550-0x4b6969 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004b6550(void)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  int *in_ECX;
  uint uVar5;
  int *in_EDX;
  undefined4 unaff_EBX;
  undefined4 uVar6;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_1c = 0x10028;
  local_18 = 2;
  local_14 = 0;
  uVar1 = in_EDX[1];
  uVar5 = CONCAT31((int3)((uint)unaff_EBX >> 8),(char)uVar1) & 0xffffff01;
  local_c = uVar1 & 6;
  local_8 = CONCAT31(local_8._1_3_,(char)uVar5);
  uVar6 = CONCAT31((int3)(uVar5 >> 8),local_c != 0);
  uVar5 = uVar1 >> 1 & 1;
  local_10 = uVar5 + 1;
  if ((uVar1 >> 2 & 1) == 0) {
    local_10 = uVar5;
  }
  cVar3 = FUN_006e5ec0(&local_1c);
  if (cVar3 == '\0') {
    local_1c = 0x10026;
    local_18 = 2;
    local_14 = 0;
    cVar3 = FUN_006e5ec0(&local_1c);
    if (cVar3 == '\0') {
      if (local_10 < 2) {
        iVar2 = *in_EDX;
        if (iVar2 == 0x10025) {
          uVar4 = FUN_006ef920(uVar6,local_8);
          return uVar4;
        }
        if (iVar2 == 0x10027) {
          uVar4 = FUN_006ef760(uVar6,local_8);
          return uVar4;
        }
        if (iVar2 == 0x10024) {
          if (local_c != 0) {
            uVar4 = FUN_006ef290(local_8);
            return uVar4;
          }
          uVar4 = FUN_006ef1a0(local_8);
          return uVar4;
        }
        if (iVar2 == 0x10023) {
          if (local_c != 0) {
            uVar4 = FUN_006ef0f0(local_8);
            return uVar4;
          }
          uVar4 = FUN_006ef040(local_8);
          return uVar4;
        }
      }
      if (local_10 == 0) {
        iVar2 = *in_EDX;
        if (iVar2 == 0x10026) {
          uVar4 = FUN_006ef4a0(local_8);
          return uVar4;
        }
        if (iVar2 == 0x10028) {
          uVar4 = FUN_006ef5b0(local_8);
          return uVar4;
        }
        if (iVar2 == 0x10021) {
          uVar4 = FUN_006ef400(local_8);
          return uVar4;
        }
        if (iVar2 == 0x10022) {
          uVar4 = FUN_006ef440(local_8);
          return uVar4;
        }
      }
      local_1c = 99;
      local_18 = 2;
      local_14 = 0;
      cVar3 = FUN_006e5ec0(&local_1c);
      if (cVar3 == '\0') {
        local_1c = 0x1002d;
        local_18 = 2;
        local_14 = 0;
        cVar3 = FUN_006e5ec0(&local_1c);
        if (cVar3 == '\0') {
          local_1c = 0x78;
          local_18 = 2;
          local_14 = 0;
          cVar3 = FUN_006e5ec0(&local_1c);
          if (cVar3 == '\0') {
            local_1c = 0x1002e;
            local_18 = 1;
            local_14 = 0;
            cVar3 = FUN_006e5ec0(&local_1c);
            if (cVar3 == '\0') {
              local_1c = 0x76;
              local_18 = 2;
              local_14 = 0;
              cVar3 = FUN_006e5ec0(&local_1c);
              if (cVar3 == '\0') {
                local_1c = 0x1002d;
                local_18 = 1;
                local_14 = 0;
                cVar3 = FUN_006e5ec0(&local_1c);
                if (cVar3 == '\0') {
                  if (local_10 < 2) {
                    if (*in_EDX == 8) {
                      uVar4 = FUN_006eeef0(uVar6);
                      return uVar4;
                    }
                    if (*in_EDX == 0x1002e) {
                      uVar4 = FUN_006eebc0(uVar6);
                      return uVar4;
                    }
                  }
                  local_1c = 0x61;
                  local_18 = 2;
                  local_14 = 0;
                  cVar3 = FUN_006e5ec0(&local_1c);
                  if (cVar3 != '\0') {
                    uVar4 = FUN_006eea80();
                    return uVar4;
                  }
                  local_1c = 0x7a;
                  local_18 = 2;
                  local_14 = 0;
                  cVar3 = FUN_006e5ec0(&local_1c);
                  if (cVar3 != '\0') {
                    uVar4 = FUN_006ee990();
                    return uVar4;
                  }
                  local_1c = 0x79;
                  local_18 = 2;
                  local_14 = 0;
                  cVar3 = FUN_006e5ec0(&local_1c);
                  if (cVar3 == '\0') {
                    local_1c = 0x7a;
                    local_18 = 3;
                    local_14 = 0;
                    cVar3 = FUN_006e5ec0(&local_1c);
                    if (cVar3 == '\0') {
                      return 0;
                    }
                  }
                  uVar4 = FUN_006ee900();
                  return uVar4;
                }
              }
              uVar4 = (**(code **)(*in_ECX + 0xb8))();
              return uVar4;
            }
          }
          uVar4 = (**(code **)(*in_ECX + 0xb4))();
          return uVar4;
        }
      }
      uVar4 = (**(code **)(*in_ECX + 0xb0))();
      return uVar4;
    }
    FUN_006ee820();
    FUN_006f0750(in_ECX[0x21] + -1);
    FUN_006f0800();
    if (in_ECX[0x25] + in_ECX[0x21] <= in_ECX[0x2e]) {
      FUN_006ef680(0xffffffff,0);
      return 1;
    }
  }
  else {
    FUN_006ee820();
    FUN_006f0750(in_ECX[0x21] + 1);
    FUN_006f0800();
    if (in_ECX[0x2e] < in_ECX[0x21]) {
      FUN_006ef680(1,0);
    }
  }
  return 1;
}

